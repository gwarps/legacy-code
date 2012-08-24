#include<stdio.h>
#include<string.h>
#define N 5
static int sum=0;
void permute(char list[],int k,int m);
int main(){

char arr[] = {'a','b','c','d','e'};
printf("\n");
permute(arr,0,N);
printf("\nTotal Num: %d\n",sum);
return 0;
}

void permute(char list[],int k,int m){
int i;
char temp;
if(k == m){
sum = sum+1;
for(i = 0;i<N;i++)
printf("%c ",list[i]);
printf("\n");
}else{
for(i=0;i<m;i++){

//swap arr[i] and arr[m-1]
temp = list[i];
list[i] = list[m-1];
list[m-1] = temp;

permute(list,k,m-1);

//swap arr[i] and arr[m-1]
temp = list[m-1];
list[m-1] = list[i];
list[i] = temp;
}
}
}
