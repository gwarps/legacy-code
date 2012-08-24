#include<stdio.h>
#define PRODUCT(x) (x*x)

int main(){

int i=3,j,k;

j = PRODUCT(i++);
printf("\nValue of i: %d",i);
k = PRODUCT(++i);
printf("\nValue of i: %d",i);

printf("\nValue of J: %d\n",j);
printf("\nValue of K: %d\n",k);
return 0;
}
