#include <stdio.h>
#include "y.tab.h"
#include "constants.h"
#include <stack>
static int lbl;
static int switchLbl;
stack<char> lastSwitchId;
stack<int> lastSwitchLbl;

int ex(nodeType *p) {
    int lbl1, lbl2;

    if (!p) return 0;
    switch(p->type) {
        case CONST_NODE:
            switch(p->expr_type) {
                case TYPE_INT:
                    printf("\tpush\t%d\n", p->conNode.ivalue);
                    break;
                case TYPE_DOUBLE:
                    printf("\tpush\t%f\n", p->conNode.dvalue);
                    break;
                case TYPE_BOOL:
                    printf("\tpush\t%d\n", p->conNode.bvalue);
                    break;
                default:
                    printf("\tpush\t'%c'\n", p->conNode.cvalue);
                    break;
            } 
            break;
        case ID_NODE:        
            printf("\tpush\t%c\n", p->idNode.id); 
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
                    ex(p->opNode.operands[1]);
                    ex(p->opNode.operands[2]);
                    printf("S%03d:\n", lastSwitchLbl.top());
                    lastSwitchId.pop();
                    lastSwitchLbl.pop();
                    break;
                case CASE:
                    printf("\tpush\t%c\n", lastSwitchId.top());
                    switch(p->opNode.operands[0]->expr_type) {
                        case TYPE_INT:
                            printf("\tpush\t%d\n", p->opNode.operands[0]->conNode.ivalue);
                            printf("\tcompEQ\n");
                            printf("\tjz\tL%03d\n", lbl1 = lbl++);
                            ex(p->opNode.operands[1]);
                            printf("\tjmp S%03d\n", lastSwitchLbl.top());
                            printf("L%03d:\n", lbl1);
                            break;
                        case TYPE_CHAR:
                            printf("\tpush\t'%c'\n", p->opNode.operands[0]->conNode.cvalue);
                            printf("\tcompEQ\n");
                            printf("\tjz\tL%03d\n", lbl1 = lbl++);
                            ex(p->opNode.operands[1]);
                            printf("\tjmp S%03d\n", lastSwitchLbl.top());
                            printf("L%03d:\n", lbl1);
                            break;
                        case TYPE_DOUBLE:
                            printf("\tpush\t%f\n", p->opNode.operands[0]->conNode.dvalue);
                            printf("\tcompEQ\n");
                            printf("\tjz\tL%03d\n", lbl1 = lbl++);
                            ex(p->opNode.operands[1]);
                            printf("\tjmp S%03d\n", lastSwitchLbl.top());
                            printf("L%03d:\n", lbl1);
                            break;
                        default:
                            printf("\tpush\t%d\n", p->opNode.operands[0]->conNode.bvalue);
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
                    printf("\tpop\t%c\n", p->opNode.operands[0]->idNode.id);
                    break;
                case 'f':
                    printf("proc %c \n", p->opNode.operands[0]->idNode.id);
                    ex(p->opNode.operands[1]);
                    ex(p->opNode.operands[2]);
                    printf("endProc\n");
                    break;
                case 'c':
                    ex(p->opNode.operands[1]);
                    printf("CALL %c\n", p->opNode.operands[0]->idNode.id);
                    break;
                case ',':
                    ex(p->opNode.operands[0]);
                    ex(p->opNode.operands[1]);
                    break;
                case 'e': break;
                case RETURN:
                    ex(p->opNode.operands[0]);
                    printf("\tRET\n");
                    break;
                default:
                    ex(p->opNode.operands[0]);
                    ex(p->opNode.operands[1]);
                    switch(p->opNode.op) {
                        case '+':   printf("\tadd\n"); break;
                        case '-':   printf("\tsub\n"); break; 
                        case '*':   printf("\tmul\n"); break;
                        case '/':   printf("\tdiv\n"); break;
                        case '%':   printf("\tmod\n"); break;
                        case '<':   printf("\tcompLT\n"); break;
                        case '>':   printf("\tcompGT\n"); break;
                        case GE:    printf("\tcompGE\n"); break;
                        case LE:    printf("\tcompLE\n"); break;
                        case NE:    printf("\tcompNE\n"); break;
                        case EQ:    printf("\tcompEQ\n"); break;
                        case OR:    printf("\tor\n"); break;
                        case AND:    printf("\tand\n"); break;
                    }
            }
    }
    return 0;
}