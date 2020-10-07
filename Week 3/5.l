/* 5. Recognize a string with three consecutive 0’s */
%option noyywrap
%%
[0-9]*000[0-9]*	  printf("string accepted\n");
[0-9]*		  printf("string rejected\n");
.*		  printf("invalid string\n");
%%
main()
{ yylex(); }

