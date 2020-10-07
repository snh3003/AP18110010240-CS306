/* 4. Recognize strings ending with 00 */
%option noyywrap
%%
[0-9]*00	printf("string accepted\n");
[0-9]*		printf("string rejected\n");
.*		printf("invalid string\n");
%%
main()
{ yylex(); }
