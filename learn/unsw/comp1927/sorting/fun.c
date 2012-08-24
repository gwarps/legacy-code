#include "link.h"


void print(int a[],int n){
printf("\n");
int i=0;
while(i<n){
printf("%d ",a[i]);
i++;
}
printf("\n");
}

void select_sort(int a[],int n){

 int min,i,j;
 int temp;
 //Outer loop iterates till second last since nothing to compare for last element
 for(i=0;i<n-1;i++){
  min=i;
  //Comparison needs not from itself but one element ahead and onwards
  for(j=i+1;j<n;j++){
   if(a[j]<a[min]){
    min=j;
   }
  }
  //swapping postion with minimum index
  temp = a[min];
  a[min] = a[i];
  a[i] = temp;

 }
}

void insert_sort(int a[],int n){

 int i,j;
 int current;

 for(i=1;i<n;i++){
  current = a[i];
  for(j=i;j>0 && current < a[j-1];j--){
   a[j] = a[j-1];
  }
  a[j] = current;

 }

}

void bubble_sort(int a[],int n){
 int i,j;
 int temp;
 // Just Take care of boundaries for avoiding segmentation fault
 for(i=n-1;i>0;i--){
  for(j=0;j<i;j++){
   if(a[j]>a[j+1]){
    temp = a[j+1];
    a[j+1] = a[j];
    a[j] = temp;
   }
  }
 }
}

void merge_sort(int a[],int low,int high){
 int mid;
 
 printf("%d-%d\n",low,high);
 if(low<high){
  mid = (high+low)/2;
  merge_sort(a,low,mid);
  merge_sort(a,mid+1,high);
  printf("MERGING\n");
  merge(a,low,mid,high);
 }
 printf("RETURN\n");
}

void merge(int a[],int low,int mid,int high){
 int i,j,k;
 int l;
 int *temp = malloc(sizeof(int)*(high-low+1));

 i=low;
 k = mid+1;
 j=0;
 for(;i<=mid && k<=high;j++){
  if(a[i]<=a[k]){
   temp[j] = a[i++];
  }else{
   temp[j] = a[k++];
  }
 
 }

 if(i>mid){
  for(l=k;l<=high;l++){
   temp[j++] = a[l];
  }
 }else{
  for(l=i;l<=mid;l++){
   temp[j++] = a[l];
  }
 } 
 
 for(l=low;l<=high;l++){
  a[l] = temp[l-low];
 }
}
