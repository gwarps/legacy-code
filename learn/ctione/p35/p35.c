#include<stdio.h>
#define MAX 3

void permute(char [],int,int);
int main(int argc,char* argv[]){

char list[3]= {'a','b','c'};
permute(list,0,MAX);
printf("\n");
return 0;
}

void permute(char list[],int k,int m){

int i;
char temp;

if(k==m){
for(i=0;i<MAX;i++){
printf("%c",list[i]);
}
printf("\n");
}else{

for(i=0;i<m;i++){
//swap a[i] and a[m-1]
temp=list[i];
list[i]=list[m-1];
list[m-1]=temp;

permute(list,k,m-1);
//swap a[i] and a[m-1]

temp=list[i];
list[i]=list[m-1];
list[m-1]=temp;
}
}
}
