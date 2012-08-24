#include<stdio.h>
main()
{
int *p,i;
float sum;
int x[5]={5,9,6,3,7};
i=0;
p=x;
printf("Element value address\n\n");
while(i<5)
{
printf("x[%d] %d %u\n",i,*p,p);
sum=sum+*p;
i++;
p++;
}
printf("\n Sum  = %.0f\n",sum);
printf("\n &x[0] = %u",&x[0]);
printf("\n p = %u",p);
}
