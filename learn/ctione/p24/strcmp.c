#include<stdio.h>
#include<string.h>

int xstrcmp(char* str1, char* str2){

while(*str1 == *str2){

if(*str1 == '\0')
return 0;
str1++;
str2++;
}

return *str1-*str2;
}

int main(){

char* str1 = "abcdefghi";
char* str2 = "abcdefgh";

printf("Result is: %d\n",xstrcmp(str1,str2));

return 0;
}
