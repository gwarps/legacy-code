#include<stdio.h>
#include<stdlib.h>

void fun(int**);

main(){
int x=2;
int *p,**q;
p=&x;
q=&p;
printf("Address of x:%u\n",&x);
printf("=========\n");
fun(q);
}
void fun(int** r){
printf("Address of x in fun: %u\n",*r);
printf("Value of x in fun: %d\n",**r);
}      
