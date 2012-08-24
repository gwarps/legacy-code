#include<stdio.h>

char* s = "char* s = %c%s%c;\nmain(){\nprintf(s,34,s,34);\n}";

int main(){

printf(s,34,s,34);

return 0;
}
