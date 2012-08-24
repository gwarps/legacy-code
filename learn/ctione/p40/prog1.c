//Author: Puneet Singh
//Generate nth Fibonacci number

#include<stdio.h>
int fib(int);
int main(int argc,char* argv[]){

int n = atoi(argv[1]);

printf("\nNumber is: %d\n",fib(n));

return 0;
}

int fib(int n){
int i;
int fibo[n+1];
fibo[0] = fibo[1] = 1;

printf("fibo[1] = %d\n",fibo[0]);
printf("fibo[2] = %d\n",fibo[1]);

for(i =3;i<=n;i++){
fibo[i] = fibo[i-1] + fibo[i-2];
printf("fibo[%d] = %d\n",i,fibo[i]);
}
return fibo[n];
}

