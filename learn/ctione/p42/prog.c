#include<stdio.h>

int main(){


int i = 1;

if(*(char*)(&i) == 1)
printf("\nLittle Indian");
else
printf("\nBig Indian");

printf("\n");
return 0;
}
