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
if(n<=2)
return 1;
else
return (fib(n-1)+fib(n-2));
}

