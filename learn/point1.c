#include<stdio.h>
main()
{
int x,*p1,**p2;
x=100;
p1=&x;
p2=&p1;
printf("\n%d is stored at address %u",x,&x);
printf("\n%d is stored at address %u",*p1,p1);
printf("\n%u is stored at address %u",p1,&p1);
printf("\n%u is stored at address %u\n",*p2,p2);
}
