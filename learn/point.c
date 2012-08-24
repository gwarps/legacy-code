#include<stdio.h>
main()
{
char a;
int x;
float p,q;
a='A';
x=125;
p=10.25;
q=18.76;
printf("%c is stored at address: %u ",a,&a);
printf("\n%d is stored at address: %u ",x,&x);
printf("\n%f is stored at address: %u ",p,&p);
printf("\n%f is stored at address: %u ",q,&q);
}
