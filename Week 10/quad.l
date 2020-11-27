/* 
lex code
Quadrapules Generator for
	E -> E+T |T
	T-> T*F | F
	F -> (E) | d
*/
%option noyywrap
%{
  #include "quad.tab.h"
%}
%%
[a-z]([a-z]|[0-9])* {  strcpy(yylval.exp,yytext);
		       return VAR;
		    }
\t		    ;
\n		    return 0;
.		    return yytext[0];
%%
