#include<stdio.h>
#include<math.h>

int isPerfect(int);
int main(int argc,char* argv[]){
int num;
int a,b;
printf("\nEnter the number: ");
scanf("%d",&num);

a = 5 * num * num + 4;
b = 5 * num * num - 4;

if(isPerfect(a) || isPerfect(b))
printf("\nIt's a Fibonacci");
else
printf("\nNot a Fibonacci");
//printf("\nResult: %d\n",isPerfect(num));

printf("\n-------------------\n");
return 0;
}

//Function for perfect square check
int isPerfect(int num){
float sq = sqrt(num);
//printf("\nRoot: %f\n",sq);
int res;
sq = sq+0.5;

res = (int)sq;

if((res*res) == num)
return 1;
else
return 0;
}


