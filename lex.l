%{
    #include "y.tab.h"
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "node.h"
    void yyerror(char *);
%}

%option yylineno

%%
exit                            {return EXIT;}
[0-9]+        					{ 
                                    yylval.iValue = atoi(yytext);
                                    return INTEGER;
                                }

(0|([1-9][0-9]*))(\.[0-9]+)? 	{
                                    char* p;
                                    yylval.dValue = double(strtod(yytext, &p));
                                    return DOUBLE_VALUE;
                                } 

\'.\'							{	
                                    yylval.cValue = char(*(yytext+1));
                                    return CHARACTER;
                                }

true|false						{	
                                    if (strcmp(yytext, "true") == 0) {
                                        yylval.bValue = true;
                                    } else {
                                        yylval.bValue = false;
                                    }

                                    return BOOLEAN;
                                }

[-%+()=/*,:;<>{}]     { return *yytext; }

">="            return GE;
"<="            return LE;
"=="            return EQ;
"!="            return NE;
"&&"			return AND;
"||"			return OR;

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

[_a-zA-Z]		{
                    yylval.cValue = *yytext;
                    return IDENTIFIER;
                }

[ \t\n]+   ;       /* skip whitespace */

.               yyerror("Unknown character");

%%

int yywrap(void) {
    return 1;
}


