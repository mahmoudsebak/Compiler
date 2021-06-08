#include <stdio.h>
#include "y.tab.h"
#include "constants.h"
#include <stack>
#include <string>
using namespace std;
static int lbl;
static int switchLbl;
stack<char> lastSwitchId;
stack<int> lastSwitchIdType;
stack<int> lastSwitchLbl;

string mp[4] = {"int", "double", "char", "bool"};

int convert_type(int t1, int t2, string& type, string& conv) {
    int who = 0;
    if (t1 == t2) {
        switch(t1) {
            case TYPE_INT: type = "<int>"; break;
            case TYPE_CHAR: type = "<char>"; break;
            case TYPE_BOOL: type = "<bool>"; break;
            default: type = "<double>"; break;
        }
        conv = "";
    } else if (t1 == TYPE_DOUBLE || t2 == TYPE_DOUBLE) {
        type = "<double>";
        if (t1 != TYPE_DOUBLE) {
            who = 1;
            conv = mp[t1] + "_to_double";
        } else {
            who = 2;
            conv = mp[t2] + "_to_double";
        }
    } else if (t1 == TYPE_INT || t2 == TYPE_INT) {
        type = "<int>";
        if (t1 != TYPE_INT) {
            conv = mp[t1] + "_to_int";
            who = 1;
        } else {
            who = 2;
            conv = mp[t2] + "_to_int";
        }
    } else if (t1 == TYPE_CHAR || t2 == TYPE_CHAR) {
        type = "<char>";
        if (t1 != TYPE_CHAR) {
            who = 1;
            conv = mp[t1] + "_to_char";
        } else {
            who = 2;
            conv = mp[t2] + "_to_char";
        }
    } 

    return who;
}

bool check_op(int op) {
    return op == '+' || op == '-' || op == '*' ||
        op == '/' || op == '%' || op == '>' ||
        op == '<' || op == GE || op == LE ||
        op == EQ || op == NE || op == OR || op == AND;
}



int ex(nodeType *p) {
    int lbl1, lbl2;

    if (!p) return 0;
    switch(p->type) {
        case CONST_NODE:
            switch(p->expr_type) {
                case TYPE_INT:
                    printf("\tpush<int>\t%d\n", p->conNode.ivalue);
                    break;
                case TYPE_DOUBLE:
                    printf("\tpush<double>\t%f\n", p->conNode.dvalue);
                    break;
                case TYPE_BOOL:
                    printf("\tpush<bool>\t%d\n", p->conNode.bvalue);
                    break;
                default:
                    printf("\tpush<char>\t'%c'\n", p->conNode.cvalue);
                    break;
            } 
            break;
        case ID_NODE:        
            printf("\tpush<%s>\t%c\n", mp[p->expr_type].c_str(), p->idNode.id); 
            break;
        case OP_NODE:
            switch(p->opNode.op) {
                case WHILE:
                    printf("L%03d:\n", lbl1 = lbl++);
                    ex(p->opNode.operands[0]);
                    printf("\tjz\tL%03d\n", lbl2 = lbl++);
                    ex(p->opNode.operands[1]);
                    printf("\tjmp\tL%03d\n", lbl1);
                    printf("L%03d:\n", lbl2);
                    break;
                case FOR:
                    ex(p->opNode.operands[0]);
                    printf("L%03d:\n", lbl1 = lbl++);
                    ex(p->opNode.operands[1]);
                    if (!(p->opNode.operands[1]->type == OP_NODE && p->opNode.operands[1]->opNode.op == 'e')) {
                        printf("\tjz\tL%03d\n", lbl2 = lbl++);
                    }
                    ex(p->opNode.operands[3]);
                    ex(p->opNode.operands[2]);
                    printf("\tjmp\tL%03d\n", lbl1);
                    printf("L%03d:\n", lbl2);
                    break;
                case DO:
                    printf("L%03d:\n", lbl1 = lbl++);
                    ex(p->opNode.operands[0]);
                    ex(p->opNode.operands[1]);
                    printf("\tjnz\tL%03d\n", lbl1);
                    break;
                case SWITCH:
                    lastSwitchLbl.push(switchLbl++);
                    lastSwitchId.push(p->opNode.operands[0]->idNode.id);
                    lastSwitchIdType.push(p->opNode.operands[0]->expr_type);
                    ex(p->opNode.operands[1]);
                    ex(p->opNode.operands[2]);
                    printf("S%03d:\n", lastSwitchLbl.top());
                    lastSwitchId.pop();
                    lastSwitchLbl.pop();
                    lastSwitchIdType.pop();
                    break;
                case CASE:
                    printf("\tpush<%s>\t%c\n", mp[lastSwitchIdType.top()].c_str(), lastSwitchId.top());
                    switch(p->opNode.operands[0]->expr_type) {
                        case TYPE_INT:
                            printf("\tpush<int>\t%d\n", p->opNode.operands[0]->conNode.ivalue);
                            printf("\tcompEQ\n");
                            printf("\tjz\tL%03d\n", lbl1 = lbl++);
                            ex(p->opNode.operands[1]);
                            printf("\tjmp S%03d\n", lastSwitchLbl.top());
                            printf("L%03d:\n", lbl1);
                            break;
                        case TYPE_CHAR:
                            printf("\tpush<char>\t'%c'\n", p->opNode.operands[0]->conNode.cvalue);
                            printf("\tcompEQ\n");
                            printf("\tjz\tL%03d\n", lbl1 = lbl++);
                            ex(p->opNode.operands[1]);
                            printf("\tjmp S%03d\n", lastSwitchLbl.top());
                            printf("L%03d:\n", lbl1);
                            break;
                        case TYPE_DOUBLE:
                            printf("\tpush<double>\t%f\n", p->opNode.operands[0]->conNode.dvalue);
                            printf("\tcompEQ\n");
                            printf("\tjz\tL%03d\n", lbl1 = lbl++);
                            ex(p->opNode.operands[1]);
                            printf("\tjmp S%03d\n", lastSwitchLbl.top());
                            printf("L%03d:\n", lbl1);
                            break;
                        default:
                            printf("\tpush<bool>\t%d\n", p->opNode.operands[0]->conNode.bvalue);
                            printf("\tcompEQ\n");
                            printf("\tjz\tL%03d\n", lbl1 = lbl++);
                            ex(p->opNode.operands[1]);
                            printf("\tjmp S%03d\n", lastSwitchLbl.top());
                            printf("L%03d:\n", lbl1);
                            break;
                    }
                    break;
                case DEFAULT:
                    ex(p->opNode.operands[0]);
                    break;
                case IF:
                    ex(p->opNode.operands[0]);
                    if (p->opNode.nops > 2) {
                        /* if else */
                        printf("\tjz\tL%03d\n", lbl1 = lbl++);
                        ex(p->opNode.operands[1]);
                        printf("\tjmp\tL%03d\n", lbl2 = lbl++);
                        printf("L%03d:\n", lbl1);
                        ex(p->opNode.operands[2]);
                        printf("L%03d:\n", lbl2);
                    } else {
                        /* if */
                        printf("\tjz\tL%03d\n", lbl1 = lbl++);
                        ex(p->opNode.operands[1]);
                        printf("L%03d:\n", lbl1);
                    }
                    break;
                case '=':
                    ex(p->opNode.operands[1]);
                    if (p->opNode.operands[1] && p->opNode.operands[0]->expr_type !=  p->opNode.operands[1]->expr_type) {
                        printf("\t%s_to_%s\n", mp[p->opNode.operands[1]->expr_type].c_str(), mp[p->opNode.operands[0]->expr_type].c_str());
                    }
                    printf("\tpop<%s>\t%c\n", mp[p->opNode.operands[0]->expr_type].c_str() , p->opNode.operands[0]->idNode.id);
                    break;
                case 'f':
                    printf("proc %c \n", p->opNode.operands[0]->idNode.id);
                    ex(p->opNode.operands[1]);
                    ex(p->opNode.operands[2]);
                    printf("endProc\n");
                    break;
                case 'c':
                    ex(p->opNode.operands[1]);
                    printf("\tcall %c\n", p->opNode.operands[0]->idNode.id);
                    break;
                case ',':
                    ex(p->opNode.operands[0]);
                    ex(p->opNode.operands[1]);
                    break;
                case 'e': break;
                case RETURN:
                    ex(p->opNode.operands[0]);
                    printf("\tret\n");
                    break;
                default:
                    int t1, t2, who;
                    string type, conv;
                    if (p->opNode.op == ';') {
                        ex(p->opNode.operands[0]);
                        ex(p->opNode.operands[1]);
                    } else {
                        t1 = p->opNode.operands[0]->expr_type;
                        t2 = p->opNode.operands[1]->expr_type;
                        who = convert_type(t1, t2, type, conv);
                        ex(p->opNode.operands[0]);
                        if (who == 1 && check_op(p->opNode.op)) {
                            printf("\t%s\n", conv.c_str());
                        } else if ((p->opNode.op == AND || p->opNode.op == OR) && t1 != TYPE_BOOL) {
                            type = "<bool>";
                            conv = mp[t1] + "_to_bool";
                            printf("\t%s\n", conv.c_str());
                        }
                        ex(p->opNode.operands[1]);
                        if (who == 2 && check_op(p->opNode.op)) {
                            printf("\t%s\n", conv.c_str());
                        } else if ((p->opNode.op == AND || p->opNode.op == OR) && t2 != TYPE_BOOL) {
                            type = "<bool>";
                            conv = mp[t2] + "_to_bool";
                            printf("\t%s\n", conv.c_str());
                        }
                    }

                    switch(p->opNode.op) {
                        case '+':   printf("\tadd%s\n", type.c_str()); break;
                        case '-':   printf("\tsub%s\n", type.c_str()); break; 
                        case '*':   printf("\tmul%s\n", type.c_str()); break;
                        case '/':   printf("\tdiv%s\n", type.c_str()); break;
                        case '%':   printf("\tmod%s\n", type.c_str()); break;
                        case '<':   printf("\tcompLT%s\n", type.c_str()); break;
                        case '>':   printf("\tcompGT%s\n", type.c_str()); break;
                        case GE:    printf("\tcompGE%s\n", type.c_str()); break;
                        case LE:    printf("\tcompLE%s\n", type.c_str()); break;
                        case NE:    printf("\tcompNE%s\n", type.c_str()); break;
                        case EQ:    printf("\tcompEQ%s\n", type.c_str()); break;
                        case OR:    printf("\tor%s\n", type.c_str()); break;
                        case AND:   printf("\tand%s\n", type.c_str()); break;
                    }
            }
    }
    return 0;
}

