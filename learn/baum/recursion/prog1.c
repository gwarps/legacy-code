#include<stdio.h>
#include<stdlib.h>

//prototype
int itr_prod(int a,int b);

int main(int argc,char* argv[]){
 int a = atoi(argv[1]);
 int b = atoi(argv[2]);

 printf("Product is : %d\n",itr_prod(a,b));

return 0;
}

int itr_prod(int a,int b){
 int i = 0;
 int sum = 0;

 while(i<b){
  sum += a;
  i++;
 }
 return sum;
}
