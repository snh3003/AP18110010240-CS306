/* 2. Count the number of Lines in given input */
%option noyywrap
%{
  int num_lines=0;
%}
%%
\n	++num_lines;
.
%%
main()
{
  yylex();
  printf("no. of lines=%d",num_lines);
}
