#include<stdio.h>
#include<stdlib.h>

int rec_array_max(int a[],int index,int size);
int main(){
 int a[] = {10,15,8,92,91,67,22,88,71,69};
 int n=10;
 
 printf("Max is : %d\n",rec_array_max(a,0,10));
     
return 0;
}

int rec_array_max(int a[],int index,int size){
 if(index > size){
  return a[index-1];
 }else{
  return ((a[index] > rec_array_max(a,index+1,size)) ? a[index] : rec_array_max(a,index+1,size));
 }
}
