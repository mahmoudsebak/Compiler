
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     CHARACTER = 259,
     IDENTIFIER = 260,
     DOUBLE_VALUE = 261,
     BOOLEAN = 262,
     IF = 263,
     ELSE = 264,
     WHILE = 265,
     DO = 266,
     FOR = 267,
     SWITCH = 268,
     CASE = 269,
     BREAK = 270,
     DEFAULT = 271,
     RETURN = 272,
     VOID = 273,
     INT = 274,
     CHAR = 275,
     BOOL = 276,
     DOUBLE = 277,
     CONST = 278,
     OR = 279,
     AND = 280,
     NOT = 281,
     NE = 282,
     EQ = 283,
     LE = 284,
     GE = 285
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define CHARACTER 259
#define IDENTIFIER 260
#define DOUBLE_VALUE 261
#define BOOLEAN 262
#define IF 263
#define ELSE 264
#define WHILE 265
#define DO 266
#define FOR 267
#define SWITCH 268
#define CASE 269
#define BREAK 270
#define DEFAULT 271
#define RETURN 272
#define VOID 273
#define INT 274
#define CHAR 275
#define BOOL 276
#define DOUBLE 277
#define CONST 278
#define OR 279
#define AND 280
#define NOT 281
#define NE 282
#define EQ 283
#define LE 284
#define GE 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 33 "grammar.y"

    int iValue;
	double dValue;
    char cValue;
	bool bValue;
	struct nodeType* node_type;



/* Line 1676 of yacc.c  */
#line 122 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


