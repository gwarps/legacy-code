#include<stdio.h>

int main(int argc,char* argv[]){

//int i=10;
//int* ptr = &i;
//printf("Value: %d\n",*ptr);
//ptr = ptr * 2;

int *a[10];

printf("%d\n",a[0]);

(*a)++;

printf("%d\n",a[0]);
return 0;
}

