#include<stdio.h>
#include<stdlib.h>

int main(){
 int* arr;
 int i;
 arr = malloc(sizeof(int)*5);
 
 for(i=0;i<5;i++){
  arr[i]=i*i;  
 }


 for(i=0;i<5;i++){

  printf("%d\n",arr[i]);
 }
 return 0;
}
