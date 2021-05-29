
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
     IDENTIFIER = 258,
     IF = 259,
     ELSE = 260,
     WHILE = 261,
     DO = 262,
     FOR = 263,
     SWITCH = 264,
     CASE = 265,
     BREAK = 266,
     DEFAULT = 267,
     RETURN = 268,
     VOID = 269,
     INTEGER = 270,
     CHARACTER = 271,
     DOUBLE_VALUE = 272,
     INT = 273,
     CHAR = 274,
     BOOL = 275,
     DOUBLE = 276,
     BOOLEAN = 277,
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
#define IDENTIFIER 258
#define IF 259
#define ELSE 260
#define WHILE 261
#define DO 262
#define FOR 263
#define SWITCH 264
#define CASE 265
#define BREAK 266
#define DEFAULT 267
#define RETURN 268
#define VOID 269
#define INTEGER 270
#define CHARACTER 271
#define DOUBLE_VALUE 272
#define INT 273
#define CHAR 274
#define BOOL 275
#define DOUBLE 276
#define BOOLEAN 277
#define CONST 278
#define OR 279
#define AND 280
#define NOT 281
#define NE 282
#define EQ 283
#define LE 284
#define GE 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


