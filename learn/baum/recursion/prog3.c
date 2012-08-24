#include<stdio.h>
#include<stdlib.h>



int rec_array_sum(int a[],int index,int high);
int main(){

 int a[] = {10,15,8,92,91,67,22,88,71,69};
 int n=10;
 
 printf("Array sum is: %d\n",rec_array_sum(a,0,10));

return 1;
}

int rec_array_sum(int a[],int index,int high){
 int sum = 0;
 if(index > high){
  return 0;
 }else{
  return a[index] + rec_array_sum(a,index+1,high);

 }
}
