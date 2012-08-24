#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//Function Prototype
void mergesort(int seq[],int low,int high);
void merge(int seq[],int low,int mid,int high);

//Main function
int main(){

int test[] = {23,52,12,56,4,12,55,2,84,23,91};
int num = 11;
int i;

printf("\n");
for(i=0;i<num;i++){
printf("%d ",test[i]);
}
mergesort(test,0,10);

printf("\n");
for(i=0;i<num;i++){
printf("%d ",test[i]);
}

printf("\n");
return 0;
}

void mergesort(int seq[],int low,int high){

int mid;

if(low<high){
mid = (low+high)/2;

mergesort(seq,low,mid);
mergesort(seq,mid+1,high);
merge(seq,low,mid,high);
}
}

void merge(int seq[],int low,int mid,int high){

int i,j,k,l;

int* temp = malloc((high - low + 1)*sizeof(int));
assert(temp!=NULL);

j=0;
i=low;
k=mid+1;

for(;i <= mid && k <= high;j++){

if(seq[i] <= seq[k])
temp[j] = seq[i++];
else
temp[j] = seq[k++];

}//end for loop

if(i>mid){

for(l=k;l<=high;l++){
temp[j++] = seq[l];
}

}else{

for(l=i;l<=mid;l++){
temp[j++] = seq[l];
}

}


for(l=low;l<=high;l++){
seq[l] = temp[l-low];
}

}

