#include<stdio.h>
int power(int m, int n);

main(){
int i;

for(i=0;i<=10;i++){
printf("5th Power of %d is :%d\n",i,power(i,2));
}
}

int power(int m,int n){

int i,k=1;
for(i=0;i<n;i++){
k*=m;
}
return k;
} 
