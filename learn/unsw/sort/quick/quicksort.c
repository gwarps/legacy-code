#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void swap(int*,int*);
int partition(int seq[],int low,int high);
void quicksort(int seq[],int low,int high);

int main(){

int test[] = {23,52,12,56,4,12,55,2,84,23,91};
int num = 11;
int i;

printf("\n");
for(i=0;i<num;i++){
printf("%d ",test[i]);
}

quicksort(test,0,num-1);

printf("\n");
for(i=0;i<num;i++){
printf("%d ",test[i]);
}


printf("\n");
return 0;
}

int partition(int seq[],int low,int high){

int pivot = seq[high];
int i = low-1;
int j = high;

while(i<j){

while(seq[++i] < pivot)
;

while(seq[--j] > pivot && j!=i);
//i = i+1;

if(i<j)
swap(&seq[i],&seq[j]);

}

swap(&seq[i],&seq[high]);

return i;
}

void swap(int* a,int* b){
int temp = *a;
*a = *b;
*b = temp;
}

void quicksort(int seq[],int low,int high){

if(low<high){
int q = partition(seq,low,high);
quicksort(seq,low,q-1);
quicksort(seq,q+1,high);
}
}

