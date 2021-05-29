%{
    #include "y.tab.h"
    #include <stdlib.h>
    void yyerror(char *);
%}

%%
[0-9]+        					return INTEGER;
(0|([1-9][0-9]*))(\.[0-9]+)? 	return DOUBLE_VALUE; 
\'.\'								return CHARACTER;
true|false							return BOOLEAN;

[-+()=/*,:;<>{}\n]     { return *yytext; }

">="            return GE;
"<="            return LE;
"=="            return EQ;
"!="            return NE;
"&&"			return AND;
"||"			return OR;
"!"				return NOT;

"int"			return INT;
"char"			return CHAR;
"double"		return DOUBLE;
"bool"			return BOOL;
"const"			return CONST;

"if"			return IF;
"else"			return ELSE;
"while"			return WHILE;
"do"			return DO;
"for"			return FOR;
"switch"		return SWITCH;
"case"			return CASE;
"break"			return BREAK;
"default"		return DEFAULT;

"void"			return VOID;
"return"		return RETURN;

[_a-zA-Z][_a-zA-Z0-9]{0,30}		return IDENTIFIER;

[ \s\t]+   ;       /* skip whitespace */

.               yyerror("Unknown character");

%%

int yywrap(void) {
    return 1;
}
