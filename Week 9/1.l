/* 1. 
E -> E+T |T
T-> T*F | F
F -> (E) | d
*/
%option noyywrap
%{
  #include "1.tab.h"
%}

%%
[0-9]+ {yylval=atoi(yytext);
	return NUMBER;
	}
[\t]	;
\n	return 0;
.	return yytext[0];
%%
