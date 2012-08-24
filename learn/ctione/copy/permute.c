#include<stdio.h>
#define N 3

void print(char num[]);
void permute(char num[],int k,int m);
void swap(char* a,char* b);

int main(){
char num[] = {'a','b','c'};
permute(num,0,N);
return 0;
}
void permute(char num[],int k,int m){
 printf("Call(%d,%d)\n",k,m);
 int i;
 if(k==m){
  print(num);
 }else{
  for(i=k;i<m;i++){
   printf("1Replace %c and %c\n",num[i],num[m-1]);
   swap(&num[i],&num[m-1]);
   permute(num,k,m-1);
   printf("2Replace %c and %c\n",num[i],num[m-1]);
   swap(&num[m-1],&num[i]);
  }
 }
}
void print(char num[]){
 int i;
 for(i=0;i<N;i++){
  printf("%c",num[i]);
 }
 printf("\n");
}

void swap(char* a,char* b){
 char temp = *a;
 *a = *b;
 *b = temp;
}
