#include<stdio.h>
int main(){
int i=10;
printf("Value of i=%d address of i=%u\n",i,&i);
&i=7200;
printf("new value of i=%d new addr = %u\n",i,&i);
}
