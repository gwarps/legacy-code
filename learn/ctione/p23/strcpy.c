#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char* str1 = "longhorwn windows 7";
//char* str2 = malloc(1*sizeof(char));
char str2[2];

strcpy(str2,str1);

printf("\n%s\n",str2);

return 0;
}
