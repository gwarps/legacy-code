#include<stdio.h>

int main(){

int arr[3] = {2,3,4};
char* p;

p = (char*)arr;
p = (char*)((int*)(p));
printf("\n%d ",*p);

p = (char*)(p+1);

printf("%d\n",*p);


return 0;
}


