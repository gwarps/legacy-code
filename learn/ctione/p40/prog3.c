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
int a,b,c;
a=b=1;
int i;
for(i=3;i<=n;i++){
c = a+b;
a=b;
b=c;
}
return c;
}

