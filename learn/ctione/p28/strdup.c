#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* xstrdup(char* str){

char* res = (char*)malloc(sizeof(strlen(str)+1));

if(res == (char*)0)
return (char*)0;

strcpy(res,str);
printf("\nEx\n");
return res;

}

int main(){

char* str1 = "abcdefgh";

char* str2 = xstrdup(str1);

printf("\n%s\n",str2);
return 0;
}
