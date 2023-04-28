
%{
	#include<stdio.h>
	int tabs = 0;
	#define NL 1
	#define TAB 2
%}

digits  	[1-9][0-9]*|[0-9]

%%

\t	return TAB;
\n	return NL;
.	return 3;

%%

int yywrap(){}
int main(int argc , char** argv){
	
 	FILE *fp;
 	fp = fopen(argv[1],"r");
	yyin = fp;

	int ntoken = yylex();
	while(ntoken){
		printf("%s", yytext);

		int flag = 0, count = 0;

		if(ntoken == NL){
			flag = 1;
			ntoken = yylex();
			while(ntoken == TAB){
				count++;
				ntoken = yylex();
			}
			//printf("count = %d\n", count);
		}
		

		if(flag == 1 && count == tabs){

		}
		else if(flag == 1 && count > tabs){
			int temp = count - tabs;
			for(int i = 0 ; i < temp; i++){
				printf(" INDENT ");
			}	
			tabs = count;
		}
		else if(flag == 1 && count < tabs){
			int temp = tabs - count;
			for(int i = 0; i < temp; i++){
				printf(" DEDENT ");
			}
			tabs = count;
		}

		if(flag == 0){
			ntoken = yylex();			
		}
		
	}


	return 0;
}
