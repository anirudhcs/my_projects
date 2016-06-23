/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING = 258,
    END = 259,
    UPTO = 260,
    VAR = 261,
    IDENTIFIER = 262,
    CHR = 263,
    POOL = 264,
    IF = 265,
    FUNCTION = 266,
    READ = 267,
    REPEAT = 268,
    RANGE = 269,
    ELSE = 270,
    RETURN = 271,
    UNTIL = 272,
    FOR = 273,
    THEN = 274,
    SWAP = 275,
    OF = 276,
    NE = 277,
    CHAR = 278,
    MOD = 279,
    GT = 280,
    CASE = 281,
    WHILE = 282,
    OUTPUT = 283,
    EQ = 284,
    PROCEDURE = 285,
    CONST = 286,
    GTE = 287,
    PRED = 288,
    NOT = 289,
    DO = 290,
    BEGINX = 291,
    INTEGER_NUM = 292,
    ORD = 293,
    AND = 294,
    EOFX = 295,
    EXP = 296,
    LTE = 297,
    LOOP = 298,
    SUCC = 299,
    TYPE = 300,
    OR = 301,
    LT = 302,
    OTHERWISE = 303,
    EXITX = 304,
    ASSIGNMENT = 305,
    PROGRAM = 306,
    DOWNTO = 307
  };
#endif
/* Tokens.  */
#define STRING 258
#define END 259
#define UPTO 260
#define VAR 261
#define IDENTIFIER 262
#define CHR 263
#define POOL 264
#define IF 265
#define FUNCTION 266
#define READ 267
#define REPEAT 268
#define RANGE 269
#define ELSE 270
#define RETURN 271
#define UNTIL 272
#define FOR 273
#define THEN 274
#define SWAP 275
#define OF 276
#define NE 277
#define CHAR 278
#define MOD 279
#define GT 280
#define CASE 281
#define WHILE 282
#define OUTPUT 283
#define EQ 284
#define PROCEDURE 285
#define CONST 286
#define GTE 287
#define PRED 288
#define NOT 289
#define DO 290
#define BEGINX 291
#define INTEGER_NUM 292
#define ORD 293
#define AND 294
#define EOFX 295
#define EXP 296
#define LTE 297
#define LOOP 298
#define SUCC 299
#define TYPE 300
#define OR 301
#define LT 302
#define OTHERWISE 303
#define EXITX 304
#define ASSIGNMENT 305
#define PROGRAM 306
#define DOWNTO 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 16 "code.y" /* yacc.c:1909  */

   TOKEN_INFO info;
   DLIST dlist;

#line 163 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
