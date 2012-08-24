#include<stdio.h>
#include<stdlib.h>

char* substr(char* str,int position,int length){

int i=0;
char* sub =  malloc(length+1);
char* res = sub;

str = str + position;

while(i < length){

*sub = *str;
printf("\n%c\n",*sub);
sub++;
str++;
i++;

}
*sub = '\0';
printf("%s\n",sub);
return (res);
}

int main(){

char* str1 = "abcdefghijklmn";

char* str2 = substr(str1,4,3);
printf("\n%s\n",str2);
return 0;
}
