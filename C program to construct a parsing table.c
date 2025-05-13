#include <stdio.h> #include <string.h>

char *nt[] = {"E", "E'", "T", "T'", "F"};
char *t[] = {"id", "+", "*", "(", ")", "$"};


char*get_rule(char*nonterm,char*term){
if(strcmp(nonterm,"E")==0&&(strcmp(term,"id")==0|| strcmp(term, "(") == 0))
return"E→TE'";
else if(strcmp(nonterm,"E'")==0&&strcmp(term,"+")==0) return "E'→ + T E'";
else if(strcmp(nonterm,"E'")==0&&(strcmp(term,")")==0|| strcmp(term, "$") == 0))
return"E'→@";
else if(strcmp(nonterm,"T")==0&&(strcmp(term,"id")==0|| strcmp(term, "(") == 0))
return"T→FT'";
else if(strcmp(nonterm,"T'")==0&&strcmp(term,"*")==0) return "T'→ * F T'";
else if(strcmp(nonterm,"T'")==0&&(strcmp(term,"+")==0|| strcmp(term, ")") == 0 || strcmp(term, "$") == 0))

return"T'→@";
else if(strcmp(nonterm,"F")==0&&strcmp(term,"id")==0) return "F → id";
else if(strcmp(nonterm,"F")==0&&strcmp(term,"(")==0) return "F → ( E )";
else
return"";
}


int main() {
printf("%-6s", "");
for(int j=0;j<6;j++) printf("%-20s", t[j]);
printf("\n");


for(int i=0;i<5;i++){ printf("%-6s", nt[i]);
for(int j= 0;j <6; j++) {
printf("%-20s", get_rule(nt[i], t[j]));
}
printf("\n");
}

return 0;
}
