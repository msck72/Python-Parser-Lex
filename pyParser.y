%{ 
   #include <stdio.h> 
   #include <stdlib.h>
   #include <stdlib.h> //to use system()
   int yylex();
   void yyerror(char * s);
   void os();
   extern FILE* yyin;
   extern char* yytext;

%} 

  %start statements 
  %token OPENBRACE CLBRACE BLOCKSTART OPENLIST CLLIST
  %token NEWLINE INDENT DEDENT
  %token ASSIGNOPR REL_OP COMA ARTH_OP
  %token IDENTIFIER NUMBER
  %token WHILE FOR IF ELSE ELIF
  %token IMPORT AS FROM CLASS DEF IN RETURN

%%

statements: statement statements 
            | declarations statements | ;

declarations : function_dec 
               | class 
               | imports;

variable : IDENTIFIER | NUMBER;

function_dec : DEF IDENTIFIER OPENBRACE arguments CLBRACE blockstart indent statements return_stmt dedent {printf("func_def completed\n");};

arguments : | set_of_args {printf("args done\n");};

set_of_args : IDENTIFIER COMA set_of_args 
               | IDENTIFIER;

return_stmt :  | RETURN function_call_explicit NEWLINE {printf("return done\n");}
               | RETURN IDENTIFIER NEWLINE  {printf("return done\n");};

class : CLASS IDENTIFIER blockstart indent set_of_functions dedent {printf("classes completed\n");};

set_of_functions : function_dec set_of_functions | ;

statement : assignment 
            | list_dec
            | iterations
            | if_stmt_s
            | function_call_explicit;

imports : IMPORT IDENTIFIER AS IDENTIFIER NEWLINE {printf("imports done\n");}
         | FROM IDENTIFIER IMPORT IDENTIFIER AS IDENTIFIER NEWLINE ;

assignment : IDENTIFIER ASSIGNOPR variable NEWLINE {printf("assignment done\n");}
            | IDENTIFIER ASSIGNOPR function_call NEWLINE {printf("assignment done\n");};

function_call_explicit : IDENTIFIER OPENBRACE arguments CLBRACE NEWLINE {printf("function_call_explicit done\n");};

function_call : IDENTIFIER OPENBRACE arguments CLBRACE {printf("function_call done\n");};

iterations : WHILE OPENBRACE test CLBRACE blockstart indent block_stmts dedent {printf("iterations completed\n");} 
            |FOR OPENBRACE IDENTIFIER IN IDENTIFIER CLBRACE blockstart indent block_stmts dedent {printf("for_stmt completed\n");}
            | WHILE test blockstart indent block_stmts dedent {printf("iterations completed\n");} 
            |FOR IDENTIFIER IN IDENTIFIER blockstart indent block_stmts dedent {printf("for_stmt completed\n");}
            |FOR IDENTIFIER IN function_call blockstart indent block_stmts dedent {printf("for_stmt completed\n");};

test : variable REL_OP variable {printf("test done\n");};

blockstart: BLOCKSTART NEWLINE {printf("blockstart done\n");};

indent: INDENT {printf("indent done\n");};

dedent: DEDENT {printf("dedent done\n");};

block_stmts : statement block_stmts
               | statement ;

if_stmt_s : if_stmt elif_stmt else_stmt;

if_stmt : IF OPENBRACE test CLBRACE blockstart indent block_stmts dedent {printf("if_stmt completed\n");}
         | IF test blockstart indent block_stmts dedent {printf("if_stmt completed\n");};

elif_stmt : | ELIF OPENBRACE test CLBRACE blockstart indent block_stmts dedent {printf("elif_stmt completed\n");}
            | ELIF test blockstart indent block_stmts dedent {printf("elif_stmt completed\n");};

else_stmt: | ELSE blockstart indent block_stmts dedent {printf("else_stmt completed\n");};

list_dec : IDENTIFIER ASSIGNOPR OPENLIST set_of_args CLLIST NEWLINE
           | IDENTIFIER ASSIGNOPR OPENLIST variable ARTH_OP variable FOR IDENTIFIER IN function_call CLLIST NEWLINE;

%% 


int main(int argc , char** argv){
  
  if(argc == 1){
      printf("Input file not given as command line input\n");
      return 0;
  }
  
   os();

   FILE *fp;
   fp = fopen(argv[1],"r");

   yyin = fp; 

   yyparse();

   printf("==========================\n");
   printf("+                        +\n");
   printf("+ Succesfull compilation +\n");
   printf("+                        +\n");
   printf("==========================\n");
}

void os(){    
  system("lex -o lexForIndentDedent.c lexForIndentDedent.l");
  system("gcc lexForIndentDedent.c -o lexForIndentDedent");
  system("./lexForIndentDedent input.py > input");
}

void yyerror(char* s){
   printf("!!!!!!!!!!!!!!!!!\n");
   printf("%s\n" , s);
   printf("!!!!!!!!!!!!!!!!!\n");
   exit(0);
}



