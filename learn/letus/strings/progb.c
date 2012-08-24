#include<stdio.h>

int main(){
char s[] = "Get Organised! learn C!!";
printf("\n%s",&s[2]);
printf("\n%s",s);
printf("\n%s",(*(&s)));

printf("\n");
return 0;
}
