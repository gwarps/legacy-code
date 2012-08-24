#include<stdio.h>
#include<stdlib.h>
void fun(int* p);
int main(){
int *p;
int x=2;
p=&x;
fun(p);
printf("Value of pointer value: %d\n",*p);
return 0;
}
void fun(int *p){

int* x=malloc(sizeof(int));
*x=3;
//p=x;

*p=3;
}
