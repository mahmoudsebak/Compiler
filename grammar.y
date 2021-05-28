
%{
void yyerror (char *s);
int yylex();
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
%}

%%

stmt:
    ';'
    | data_type IDENTIFIER '=' expr ';'
    | IDENTIFIER '=' expr ';'
    | data_type IDENTIFIER ';'
    | CONST data_type IDENTIFIER '=' expr ';'
    | '{' stmt_list '}'
    | IF '(' expr ')' stmt ELSE stmt
    | IF '(' expr ')' stmt
    | WHILE '(' expr ')' stmt
    | DO stmt WHILE '(' expr ')' ';'
    | FOR '(' opt_expr ';' opt_expr ';' opt_expr ')' stmt
    | SWITCH '(' IDENTIFIER ')' '{' case_list default_stmt '}'
    | RETURN IDENTIFIER ';'
    | RETURN opt_expr ';'
    | RETURN INTEGER ';'
    | RETURN CHARACTER ';'
    | RETURN DOUBLE_VALUE ';'
    | RETURN BOOLEAN ';'
    | function_stmt

data_type:
    INT
    | CHAR
    | DOUBLE
    | BOOL

expr:
    INTEGER
    | CHARACTER
    | DOUBLE_VALUE
    | BOOLEAN
    | IDENTIFIER
    | expr '+' expr          
    | expr '-' expr     
    | expr '*' expr     
    | expr '/' expr    
    | expr '%' expr     
    | expr AND expr     
    | expr OR expr      
    | expr '>' expr     
    | expr '<' expr
    | expr LE expr
    | expr GE expr
    | expr EQ expr
    | expr NE expr
    | '(' expr ')'



function_stmt:
    VOID IDENTIFIER '(' paramter_list ')' '{' stmt_list '}'
    | INT IDENTIFIER '(' paramter_list ')' '{' stmt_list '}'
    | DOUBLE IDENTIFIER '(' paramter_list ')' '{' stmt_list '}'
    | CHAR IDENTIFIER '(' paramter_list ')' '{' stmt_list '}'
    | BOOL IDENTIFIER '(' paramter_list ')' '{' stmt_list '}'

paramter:
    INT IDENTIFIER
    | CHAR IDENTIFIER
    | DOUBLE IDENTIFIER
    | BOOL IDENTIFIER

paramter_list:
    paramter
    | paramter_list ',' paramter
    | ''

default_stmt:
        ''
        | DEFAULT ':' stmt_list

case_stmt:
    CASE '(' INTEGER ')' ':' stmt_list BREAK ';'
    | CASE '(' DOUBLE_VALUE ')' ':' stmt_list BREAK ';'
    | CASE '(' CHAR ')' ':' stmt_list BREAK ';'

case_list:
    case_stmt
    | case_list case_stmt

opt_expr:
        expr
        | ''

stmt_list:
    stmt
    | stmt_list stmt

%%