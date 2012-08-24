#include<stdio.h>

int main(){

char str1[] = "Bombay";
char str2[] = "Pune";
char* s1 = str1;
char* s2 = str2;

while(*s1++ = *s2++);
printf("%s\n",str1);
return 0;

}
