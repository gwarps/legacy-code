#include<stdio.h>
int main(){
int i=10,j=20;
int diff,mul;
diff=&i-&j;
mul=&i*&j;

printf("&i=%u &j=%u\n",&i,&j);
printf("diff:%d mul(&i*1):%d\n",diff,mul);
}
