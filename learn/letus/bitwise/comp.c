#include<stdio.h>

int main(){

int j,k;

for(j=0;j<=3;j++){

printf("\nDecimal %d is same as binary",j);

k = ~j;
printf("\nOne's Complement of %d is ",k);
}
printf("\n");
return 0;
}
