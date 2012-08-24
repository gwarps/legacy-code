#include<stdio.h>

int main(char argc,char* argv[]){

int n = atoi(argv[1]);

int i,k,andmask;

for(i=15;i>=0;i--){

andmask = 1<<i;

k = n & andmask;

k == 0?printf("0"):printf("1");
}
printf("\n");
return 0;

}
