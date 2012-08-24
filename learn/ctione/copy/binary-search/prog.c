#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//Array based
int bin_search(int a[],int size,int target);
//Recursion based
int rec_bin_search(int a[],int low,int high,int target);
void print_arr(int a[],int size);

int main(int argc,char* argv[]){
 int num = atoi(argv[1]);
 int list[] = {2,6,8,23,51,62,77,84,123,211};

 print_arr(list,10); 

 printf("Array Based Search :: %d\n",bin_search(list,10,num));
 printf("Rec Array Based Search :: %d\n",rec_bin_search(list,0,9,num));

return 0;
}


void print_arr(int a[],int size){
 int i=0;
 while(i<size){
  printf("%d ",a[i]);
  i++;
 }
 printf("\n");
}

// Array based iterative binary search


int bin_search(int a[],int size,int target){
 printf("TARGET:: %d\n",target);
 int low = 0;
 int high = size-1;
 while(low <= high){ 
 int middle = (low+high)/2;
  printf("%d %d %d\n",low,middle,high);
  printf("A[mid] %d\n",a[middle]);
  sleep(1);
  if(a[middle]==target){
   return middle;
  }else{
   if(target > a[middle]){
    low = middle + 1;
   }else{
    high = middle - 1;
   }
  }
 }
 return -1;
}

int rec_bin_search(int a[],int low,int high,int target){
 if(low>high){
  return -1;
 }
 
 int middle = (low+high)/2;
 
 
 if(target == a[middle]){
  return middle;
 }else{
  if(target > a[middle]){
   return rec_bin_search(a,middle+1,high,target);
  }else{
   return rec_bin_search(a,low,middle-1,target);
  }
 }
}
