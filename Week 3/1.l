/* 1. Identification of Vowels and Consonants */
%option noyywrap
%%
[aeiouAEIOU]    printf("%s is vowel\n",yytext); 
[a-zA-Z]	printf("%s is consonant\n",yytext);
.		printf("%s is invalid lexeme\n",yytext);
%%
main()
{ yylex(); }
