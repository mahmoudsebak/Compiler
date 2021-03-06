
%{
void yyerror (char *s);
int yylex();
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include <typeinfo>
#include "node.h"
#include "symbol_table_tree.h"
#include "constants.h"
#include "generate_quadrables.h"
extern int yylineno;
extern FILE *yyin, *yyout;

SymbolTableTree* symbolTable = new SymbolTableTree();
void insert(char id, int kind, int type, int modifier);
struct nodeType* intNode(int value);
struct nodeType* charNode(char value);
struct nodeType* doubleNode(double value);
struct nodeType* boolNode(bool value);
struct nodeType* idNode(char id, int type=-1);
nodeType *opNode(int op, int nops, ...);
void lookup(char id);
void isInitialized(char id);
bool invalidTypes(int op, nodeType* op1, nodeType* op2);
bool type_op(int op);
int expr_out(int op, int t1, int t2);
bool isFunction(char id);
static int error;

%}

%union {
    int iValue;
	double dValue;
    char cValue;
	bool bValue;
	struct nodeType* node_type;
};

%error-verbose

%token <iValue> INTEGER
%token <cValue> CHARACTER IDENTIFIER
%token <dValue> DOUBLE_VALUE
%token <bValue> BOOLEAN  
%token IF ELSE WHILE DO FOR SWITCH CASE  BREAK DEFAULT RETURN  VOID EXIT
%token INT CHAR BOOL DOUBLE CONST OR AND

%type <iValue> data_type 
%type <node_type> expr stmt stmt_list opt_expr for_statement case_stmt
%type <node_type> case_list paramter_list default_stmt function_stmt paramter identifier_list
%left GE LE EQ NE '>' '<'
%left '+' '-'
%left '*' '/'

%%

program:
        program stmt EXIT												{ 	
																			yyout = fopen("outputs/warnings.txt", "w");
																			symbolTable->unusedVariables();
																			yyout = fopen("outputs/quadruples.txt", "w"); 
																			if (!error) {
																				ex($2);
																			}
																			yyout = fopen("outputs/symbol_table.txt", "w");
																			symbolTable->print();
																	    }
        | 															
        ;

open_bracket:
		'{'																{ symbolTable->create(); }
		;

closed_bracket:
		'}'																{ symbolTable->up(); }
		;

stmt:
        expr  ';'                    									{ $$ = $1; }
		| data_type IDENTIFIER '=' expr ';'								{	
																			insert($2, KIND_VAR, $1, NO_MOD);
																			symbolTable->markInitialized($2);
																			$$ = opNode('=', 2, idNode($2), $4);
																		}
		| IDENTIFIER '=' expr ';'      									{ 
																			lookup($1);
																			symbolTable->markUsed($1);
																			symbolTable->markInitialized($1);
																			$$ = opNode('=', 2, idNode($1), $3);
		 																} 
		| data_type IDENTIFIER ';'										{	 
																			$$ = opNode('e', 0);
																			insert($2, KIND_VAR, $1, NO_MOD);
																		}
		| CONST data_type IDENTIFIER '=' expr ';'						{
																			insert($3, KIND_VAR, $2, MOD_CONST);
																			symbolTable->markInitialized($3);
																			$$ = opNode('=', 2, idNode($3), $5);
																		}
		| IF '(' expr ')' open_bracket stmt closed_bracket ELSE open_bracket stmt closed_bracket { $$ = opNode(IF, 3, $3, $6, $10); }
		| IF '(' expr ')' open_bracket stmt closed_bracket				{ $$ = opNode(IF, 2, $3, $6); }
		| WHILE '(' expr ')' open_bracket stmt closed_bracket			{ $$ = opNode(WHILE, 2, $3, $6); }
		| DO open_bracket stmt closed_bracket WHILE '(' expr ')' ';'	{ $$ = opNode(DO, 2, $3, $7); }
		| FOR '(' for_statement ';' opt_expr ';' for_statement ')' open_bracket stmt closed_bracket	{ $$ = opNode(FOR, 4, $3, $5, $7, $10); }
		| open_bracket stmt_list closed_bracket 						{ $$ = $2; }
		| SWITCH '(' IDENTIFIER ')' open_bracket case_list default_stmt closed_bracket		{
																								lookup($3);
																								isInitialized($3); 
																								symbolTable->markUsed($3);
																								$$ = opNode(SWITCH, 3, idNode($3), $6, $7);
																							}
		| RETURN opt_expr ';'											{
																			$$ = opNode(RETURN, 1, $2); 
																		}
		| function_stmt													{ $$ = $1; }
		| stmt stmt														{ $$ = opNode(';', 2, $1, $2); }
		| ';'															{ $$ = opNode(';', 0); }
 		| error '}'
        ;
		
for_statement:
		IDENTIFIER '=' expr												{ 
																			lookup($1);
																			symbolTable->markUsed($1);
																			symbolTable->markInitialized($1);
																			$$ = opNode('=', 2, idNode($1), $3);
																		}
		| data_type IDENTIFIER '=' expr									{ 
																			insert($2, KIND_VAR, $1, NO_MOD);
																			symbolTable->markInitialized($2);
																			$$ = opNode('=', 2, idNode($2), $4);
																		}
		|																{ $$ = opNode('e', 0);}
		;
		
data_type:
		INT							{ $$ = TYPE_INT; }
		| CHAR						{ $$ = TYPE_CHAR; }
		| DOUBLE					{ $$ = TYPE_DOUBLE; }
		| BOOL						{ $$ = TYPE_BOOL; }
		;
		
expr:
        INTEGER												{ $$ = intNode($1); } 
		| '-' INTEGER										{ $$ = intNode(-1*$2); }
		| CHARACTER											{ $$ = charNode($1); }
		| BOOLEAN											{ $$ = boolNode($1); }
		| DOUBLE_VALUE										{ $$ = doubleNode($1); }
		| '-' DOUBLE_VALUE									{ $$ = doubleNode(-1*$2); }
        | IDENTIFIER                      					{ 
																isInitialized($1);
																isFunction($1);
																symbolTable->markUsed($1);
																$$ = idNode($1); 
															}
        | expr '+' expr     								{ $$ = opNode('+', 2, $1, $3); }
        | expr '-' expr     								{ $$ = opNode('-', 2, $1, $3);  }
        | expr '*' expr     								{ $$ = opNode('*', 2, $1, $3); }
        | expr '/' expr     								{ $$ = opNode('/', 2, $1, $3); }
		| expr '%' expr     								{ $$ = opNode('%', 2, $1, $3); }
		| expr AND expr     								{ $$ = opNode(AND, 2, $1, $3); }	
		| expr OR expr      								{ $$ = opNode(OR, 2, $1, $3); }
		| expr '>' expr     								{ $$ = opNode('>', 2, $1, $3); }
		| expr '<' expr										{ $$ = opNode('<', 2, $1, $3); }
		| expr LE expr										{ $$ = opNode(LE, 2, $1, $3); }
		| expr GE expr										{ $$ = opNode(GE, 2, $1, $3); }										
		| expr EQ expr										{ $$ = opNode(EQ, 2, $1, $3); }
		| expr NE expr										{ $$ = opNode(NE, 2, $1, $3); }
        | '(' expr ')'            							{ $$ = $2; }
		| IDENTIFIER '(' identifier_list ')' 				{ 
																lookup($1);
																symbolTable->markUsed($1);
																$$ = opNode('c', 2, idNode($1), $3);
															} 
        ;
		
opt_expr:
        expr												{ $$ = $1; }
        | 													{ $$ = opNode('e', 0);}
		;
		
stmt_list:
		stmt												{ $$ = $1; }
		| stmt_list stmt									{ $$ = opNode(';', 2, $1, $2); }
		|													{ $$ = opNode('e', 0);}
		;
		
		
default_stmt:
        DEFAULT ':' stmt_list BREAK ';'								{ $$ = opNode(DEFAULT, 1, $3);}
		| DEFAULT ':' stmt_list										{ $$ = opNode(DEFAULT, 1, $3);}
		|															{ $$ = opNode('e', 0);}									
		;

case_stmt:
		CASE '(' INTEGER ')' ':' stmt_list BREAK ';'			{ $$ = opNode(CASE, 2, intNode($3), $6);}
		| CASE '(' DOUBLE_VALUE ')' ':' stmt_list BREAK ';'		{ $$ = opNode(CASE, 2, doubleNode($3), $6);}
		| CASE '(' CHARACTER ')' ':' stmt_list BREAK ';'		{ $$ = opNode(CASE, 2, charNode($3), $6);}
		| CASE '(' INTEGER ')' ':' stmt_list					{ $$ = opNode(CASE, 2, intNode($3), $6);}
		| CASE '(' DOUBLE_VALUE ')' ':' stmt_list 				{ $$ = opNode(CASE, 2, doubleNode($3), $6);}
		| CASE '(' CHARACTER ')' ':' stmt_list					{ $$ = opNode(CASE, 2, charNode($3), $6);}
		;
	
case_list:
		case_stmt												{$$ = $1;}
		| case_list case_stmt									{$$ = opNode(';', 2, $1, $2);}
		;

function_stmt:
		VOID IDENTIFIER '(' paramter_list ')' open_bracket stmt_list closed_bracket	{
																						$$ = opNode('f', 3, idNode($2), $4, $7);
																						insert($2, KIND_FUN, TYPE_VOID, NO_MOD);
																						symbolTable->markInitialized($2); 
																					}
		| data_type IDENTIFIER '(' paramter_list ')' open_bracket stmt_list closed_bracket	{
																								$$ = opNode('f', 3, idNode($2), $4, $7);
																								insert($2, KIND_FUN, $1, NO_MOD);
																								symbolTable->markInitialized($2);
																							}
		;

paramter:
		data_type IDENTIFIER														{
																						symbolTable->pushParameter($2, $1);
																						$$ = opNode('=', 1, idNode($2, $1));
																					}
		;

paramter_list:
		paramter																	{ $$ = opNode(',', 1, $1); }
		| paramter_list ',' paramter												{ $$ = opNode(',', 2, $1, $3); }
		|																			{ $$ = opNode('e', 0); }
		;	

identifier_list:
		expr																		{ $$ = $1; }
		| identifier_list ',' expr													{ $$ = opNode(',', 2, $1, $3);}
		|
		;	
%%

void yyerror(char *s) {
 fprintf(yyout, "line %d: %s\n", yylineno, s);
}

void insert(char id, int kind, int type, int modifier) {
	bool res = symbolTable->insert(id, kind, type, modifier);
	if (!res) {
		fprintf(yyout, "Declaration conflict!, Symbol %c declared before.\n", id);
		error = 1;
	}
}

void lookup(char id) {
	bool res = symbolTable->lookup(id);
	if (!res) {
		fprintf(yyout, "Symbol %c used before being declared!\n", id);
		error = 1;
	}
}

void isInitialized(char id) {
	bool res = symbolTable->lookup(id);
	if (!res) {
		fprintf(yyout, "Symbol %c used before being declared!\n", id);
		error = 1;
	} else {
		res = symbolTable->isInitialized(id);
		if (!res) {
			fprintf(yyout, "Symbol %c used before being initialized!\n", id);
			error = 1;
		}
	}
	
}

nodeType* intNode(int value) {
    nodeType* p = new nodeType();
    
	p->type = CONST_NODE;
	p->expr_type = TYPE_INT;
    p->conNode.ivalue = value;

    return p;
}

nodeType* charNode(char value) { 
	nodeType* p = new nodeType();
    
	p->type = CONST_NODE;
	p->expr_type = TYPE_CHAR;
    p->conNode.cvalue = value;

    return p;
}

nodeType* doubleNode(double value) {
    nodeType* p = new nodeType();

    p->type = CONST_NODE;
	p->expr_type = TYPE_DOUBLE;
    p->conNode.dvalue = value;

    return p;
}

nodeType* boolNode(bool value) {
    nodeType* p = new nodeType();

    /* copy information */
    p->type = CONST_NODE;
	p->expr_type = TYPE_BOOL;
    p->conNode.bvalue = value;

    return p;
}




nodeType *idNode(char id, int type) {
    nodeType* p = new nodeType();
    p->type = ID_NODE;
	bool exists = symbolTable->lookup(id); 
	p->expr_type = exists ? symbolTable->getType(id) : type;
    p->idNode.id = id;

    return p;
}

nodeType *opNode(int op, int nops, ...) {
    va_list ap;
	va_start(ap, nops);
    struct nodeType* operands[4];
	for (int i = 0; i < nops; i++)
        operands[i] = va_arg(ap, nodeType*);
    
	va_end(ap);

	if (nops == 2 && type_op(op)) {
		if (invalidTypes(op, operands[0], operands[1])) {
			error = 1;
		}
	}

    nodeType* p = new nodeType();

    p->type = OP_NODE;
    p->opNode.op = op;
    p->opNode.nops = nops;

	if(op == '=') {
		p->expr_type = symbolTable->getType(operands[0]->idNode.id);
	} else if (type_op(op) && nops == 2) {
		p->expr_type = expr_out(op, operands[0]->expr_type, operands[1]->expr_type);
	}

	for (int i = 0; i < nops; i++)
        p->opNode.operands[i] = operands[i];

    return p;
}

bool invalidTypes(int op, nodeType* op1, nodeType* op2) {
	int t1 = op1->expr_type;
	int t2 = op2->expr_type;

	if (op == '%') {
		bool f = (t1 == TYPE_DOUBLE || t2 == TYPE_DOUBLE);
		if (f) {
			fprintf(yyout, "Type mismatch! modulus double operations\n");
		}
		return f;
	} else if (op == '=') {
		bool f = ( t1 == TYPE_CHAR && t2 == TYPE_DOUBLE );
		if (f) {
			fprintf(yyout, "Type mismatch! assigning double to char\n");
		}
		return f;
	}

	return false; 
}

int expr_out(int op, int t1, int t2) {
	if (t1 == t2) return t1;
	else if (op == OR || op == AND) return TYPE_BOOL;
	else if (t1 == TYPE_DOUBLE || t2 == TYPE_DOUBLE) return TYPE_DOUBLE;
	else if (t1 == TYPE_INT || t2 == TYPE_INT) return TYPE_INT;
	else if (t1 == TYPE_CHAR || t2 == TYPE_CHAR) return TYPE_CHAR;
	else return TYPE_BOOL;
}

bool type_op(int op) {
	return op != ';' && op != IF && op != WHILE &&
	    op != DO && op != FOR && op != SWITCH && op != CASE && op != DEFAULT &&
		op != 'f' && op != 'p' && op != ',' && op != 'c' && op != 'e';
}

bool isFunction(char id) {
	if(symbolTable->getKind(id) == KIND_FUN) {
		fprintf(yyout, "Type mismatch ! Cant assign a function type to variable type!\n");
		error = 1;
		return true;
	}
	return false;
}


int main (int argc, char** argv) {
	yyin = fopen(argv[1], "r");
	yyout = fopen("outputs/errors.txt", "w");
	yyparse();
	return 0;
}
