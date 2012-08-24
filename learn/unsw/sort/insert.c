#include<stdio.h>

void insert_sort(int test[],int num);

int main(){

int test[] = {10,2,39,12,4,20,14,55,1,7};
int num = 10;
int i;

for(i=0;i<num;i++)
printf("%d ",test[i]);
insert_sort(test,num);
printf("\n-------------------\n");


return 0;
}

void insert_sort(int test[],int num){
int i,j;
int current;

for(i=1;i<num;i++){
current = test[i];

for(j=i;j>0&&current<test[j-1];j--){
test[j] = test[j-1];
}
test[j] = current;
}
}
