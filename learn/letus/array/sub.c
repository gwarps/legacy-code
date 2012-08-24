#include<stdio.h>

int main(){
int arr[] = { 10, 20, 30, 45, 67, 56, 74 } ;
int *i, *j ;

i=&arr[0];
j=&arr[5];
printf("%d %d\n",j-i,*j-*i);	
printf("%u %u\n",i,j);
return 0;
}
