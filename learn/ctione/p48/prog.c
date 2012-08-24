#include<stdio.h>


//Iterative
int iterative(int a,int b){
int temp;
while(b){
temp = a % b;
a = b;
b =temp;
}
return a;
}

//Recursive GCD
int recursive(int a,int b){
int temp;
temp = a % b;

if(temp==0)
return b;
else
return recursive(b,temp);
}

int main(int argc,char* argv[]){
int a,b;
a = atoi(argv[1]);
b = atoi(argv[2]);

printf("\nGCD from Recursive Method: %d\n",recursive(a,b));
printf("\nGCD from Iterative Method: %d\n",iterative(a,b));

return 0;
}

