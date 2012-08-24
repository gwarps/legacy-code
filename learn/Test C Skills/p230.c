#include<stdio.h>

int main(){

int x,y,z;
x=y=z=1;

//int a = ++x || ++y && ++z;
int a = ++y||++z;
printf("%d %d %d\n",x,y,z);
printf("%d\n",a);
return 0;
}
