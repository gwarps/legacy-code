#include<stdio.h>

int main(int argc,char* argv[]){

int i,k,andmask;

int n = atoi(argv[1]);

for(i=15;i>=0;i--){
andmask = 1<<i;
k = n & andmask;

k == 0?printf("0"):printf("1");
}
printf("\n");
}
