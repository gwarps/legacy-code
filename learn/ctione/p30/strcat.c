#include<stdio.h>
#include<string.h>

int main(){

char str1[20] = "abcdef";
char* str2 = "ghijk";

strcat(str1,str2);

printf("\n%s\n",str1);
return 0;
}
