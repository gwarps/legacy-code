#include<stdio.h>

char* xstrcat(char* str1,const char* str2){

char* p = str1;
if(p == NULL || str2 == NULL)
return p;

while(*p)
p++;

while(*p++ = *str2++);

return str1;
}

int main(){
char str1[20] = "abcdef";
char* str2 = "ghijk";

xstrcat(str1,str2);

printf("\n%s\n",str1);
return 0;
}


