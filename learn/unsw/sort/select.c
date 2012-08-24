#include<stdio.h>

void selection_sort(int test[],int num);
void swap(int*,int*);

int main(){
int test[] = {10,2,39,12,4,20,14,55,1,7};
int num = 10;
int i;

for(i=0;i<num;i++)
printf("%d ",test[i]);
selection_sort(test,num);
printf("\n-------------------\n");


for(i=0;i<num;i++)
printf("%d ",test[i]);
printf("\n-------------------\n");


return 0;
}


//Selection Sort
void selection_sort(int test[],int num){

int i,j,min;
int temp;
for(i=0;i<num;i++){

min=i;

for(j=i+1;j<num;j++){

if(test[min]>test[j])
min = j;

}

swap(&test[i],&test[min]);

}
}
//Swapping
void swap(int* a,int* b){

int temp = *a;
*a = *b;
*b = temp;
}
