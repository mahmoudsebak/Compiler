
%{
void yyerror (char *s);
int yylex();
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
%}

%token IDENTIFIER IF ELSE WHILE DO FOR SWITCH CASE  BREAK DEFAULT RETURN  VOID
%token INTEGER CHARACTER DOUBLE_VALUE INT CHAR BOOL DOUBLE BOOLEAN CONST OR AND NOT

%left GE LE EQ NE '>' '<'
%left '+' '-'
%left '*' '/'

%%

program:
        program stmt '\n'
        | /* NULL */
        ;

stmt:
        expr  ';'                    									{ printf("Expression\n"); }
        | IDENTIFIER '=' expr ';'      									{ printf("Assignment\n"); } 
		| data_type IDENTIFIER '=' expr ';'								{ printf("Declaration with assignment\n"); }
		| data_type IDENTIFIER ';'										{ printf("Declaration\n"); }
		| CONST data_type IDENTIFIER '=' expr ';'						{ printf("Const Declaration\n"); }
		| IF '(' expr ')' stmt ELSE stmt								{ printf("IF Else Condition\n"); }
		| IF '(' expr ')' stmt											{ printf("IF Condition\n"); }
		| WHILE '(' expr ')' stmt										{ printf("While Loop\n"); }
		| DO stmt WHILE '(' expr ')' ';'								{ printf("Do While Loop\n"); }
		| FOR '(' for_statement ';' opt_expr ';' for_statement ')' stmt	{ printf("For Loop\n"); }
		| '{' stmt_list '}' 											{ printf("List\n"); }
		| SWITCH '(' IDENTIFIER ')' '{' case_list default_stmt '}'		{ printf("Switch Case\n");}
		| RETURN IDENTIFIER ';'											{ printf("Return variable\n");}
		| RETURN opt_expr ';'											{ printf("Return expression\n");}
		| RETURN INTEGER ';'											{ printf("Return integer\n");}
		| RETURN CHARACTER ';'											{ printf("Return char\n");}
		| RETURN DOUBLE_VALUE ';'										{ printf("Return double\n");}
		| RETURN BOOLEAN ';'											{ printf("Return boolean\n");}
		| function_stmt													{ printf("Function\n");}
		| stmt stmt
		| ';'
        ;
		
for_statement:
		IDENTIFIER '=' expr
		| data_type IDENTIFIER '=' expr
		|
		;
		
data_type:
		INT							{ printf("Integer datatype\n"); }
		| CHAR						{ printf("Charater datatype\n"); }
		| DOUBLE					{ printf("Double datatype\n"); }
		| BOOL						{ printf("Boolean datatype\n"); }
		;
		
expr:
        INTEGER												{ printf("Integer\n");} 
		| '-' INTEGER										{ printf("Negative Integer\n");}
		| CHARACTER											{ printf("Character\n"); }
		| BOOLEAN											{ printf("Boolean\n"); }
		| DOUBLE_VALUE										{ printf("Double\n"); }
		| '-' DOUBLE_VALUE										{ printf("Negative Double\n"); }
        | IDENTIFIER                      					{ printf("Identifier\n"); }
        | expr '+' expr     								{ printf("Addition\n");  }
        | expr '-' expr     								{ printf("Subtraction\n");  }
        | expr '*' expr     								{ printf("Multiplication\n"); }
        | expr '/' expr     								{ printf("Division\n"); }
		| expr '%' expr     								{ printf("Modulus\n"); }
		| expr AND expr     								{ printf("AND\n"); }	
		| expr OR expr      								{ printf("OR\n"); }
		| expr '>' expr     								{ printf("Greater than\n"); }
		| expr '<' expr										{ printf("Less than\n"); }
		| expr LE expr										{ printf("Less than or Equal\n"); }
		| expr GE expr										{ printf("Greater than or Equal\n"); }										
		| expr EQ expr										{ printf("Equal\n"); }
		| expr NE expr										{ printf("Not Equal\n"); }
        | '(' expr ')'            							{ printf("Brackets\n"); }
		| IDENTIFIER '(' identifier_list ')' 				{ printf("Function Call\n"); } 
        ;
		
opt_expr:
        expr
        | 
		;
		
stmt_list:
		stmt
		| stmt_list stmt 
		|
		;
		
		
default_stmt:
        DEFAULT ':' stmt_list
		|
		;

case_stmt:
		CASE '(' INTEGER ')' ':' stmt_list BREAK ';'
		| CASE '(' DOUBLE_VALUE ')' ':' stmt_list BREAK ';'
		| CASE '(' CHARACTER ')' ':' stmt_list BREAK ';'
		| CASE '(' INTEGER ')' ':' stmt_list
		| CASE '(' DOUBLE_VALUE ')' ':' stmt_list 
		| CASE '(' CHARACTER ')' ':' stmt_list
		;
	
case_list:
		case_stmt
		| case_list case_stmt
		;

function_stmt:
		VOID IDENTIFIER '(' paramter_list ')' '{' stmt_list '}'
		| data_type IDENTIFIER '(' paramter_list ')' '{' stmt_list '}'
		;

paramter:
		data_type IDENTIFIER
		;

paramter_list:
		paramter
		| paramter_list ',' paramter
		|
		;	

identifier_list:
		expr
		| identifier_list ',' expr
		|
		;	
%%

int main (void) {
	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 
