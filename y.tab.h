/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OPENBRACE = 258,               /* OPENBRACE  */
    CLBRACE = 259,                 /* CLBRACE  */
    BLOCKSTART = 260,              /* BLOCKSTART  */
    OPENLIST = 261,                /* OPENLIST  */
    CLLIST = 262,                  /* CLLIST  */
    NEWLINE = 263,                 /* NEWLINE  */
    INDENT = 264,                  /* INDENT  */
    DEDENT = 265,                  /* DEDENT  */
    ASSIGNOPR = 266,               /* ASSIGNOPR  */
    REL_OP = 267,                  /* REL_OP  */
    COMA = 268,                    /* COMA  */
    ARTH_OP = 269,                 /* ARTH_OP  */
    IDENTIFIER = 270,              /* IDENTIFIER  */
    NUMBER = 271,                  /* NUMBER  */
    WHILE = 272,                   /* WHILE  */
    FOR = 273,                     /* FOR  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    ELIF = 276,                    /* ELIF  */
    IMPORT = 277,                  /* IMPORT  */
    AS = 278,                      /* AS  */
    FROM = 279,                    /* FROM  */
    CLASS = 280,                   /* CLASS  */
    DEF = 281,                     /* DEF  */
    IN = 282,                      /* IN  */
    RETURN = 283                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define OPENBRACE 258
#define CLBRACE 259
#define BLOCKSTART 260
#define OPENLIST 261
#define CLLIST 262
#define NEWLINE 263
#define INDENT 264
#define DEDENT 265
#define ASSIGNOPR 266
#define REL_OP 267
#define COMA 268
#define ARTH_OP 269
#define IDENTIFIER 270
#define NUMBER 271
#define WHILE 272
#define FOR 273
#define IF 274
#define ELSE 275
#define ELIF 276
#define IMPORT 277
#define AS 278
#define FROM 279
#define CLASS 280
#define DEF 281
#define IN 282
#define RETURN 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
