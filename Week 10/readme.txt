cmd commands:
flex quad.l
yacc -d quad.y
gcc lex.yy.c quad.tab.c -w
a
sample inputs:
1. a+b*c
2. a+c+d*f+e
3. a+*b
