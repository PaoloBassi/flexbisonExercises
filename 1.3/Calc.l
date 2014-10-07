/* recognize tokes from a calculator and print them out */
%%
"+"     { printf("PLUS\n");} 
"-"     { printf("MINUS\n");}
"*"     { printf("TIMES\n");}
"/"     { printf("DIVIDE\n");}
"|"     { printf("ABS\n");}
[0-9]+  { printf("NUMBER %s", yytext);}
\n      { printf("NEWLINE\n");}
[ \t]   { }
.       { printf("Mystery character %s", yytext);}
%%
