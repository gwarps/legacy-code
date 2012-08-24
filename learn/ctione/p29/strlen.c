#include<stdio.h>
#include<stdlib.h>
#include<string.h>

size_t xstrlen(char* str){

size_t length = 0;

while(*str !='\0')
{
str++;
length++;
}

return length;
}

int main(){

char* str = "abcdegfi";

printf("\nLength: %d\n",xstrlen(str));

return 0;
}
