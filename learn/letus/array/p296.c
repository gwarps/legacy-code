#include<stdio.h>

int main(){
 int s[5][2] = {
		{1234,56},
		{1212,33},
		{1434,80},
		{1312,78}
     };

 int (*a)[2];
 int *p,*k;
 int i,j;

 for(i=0;i<4;i++){

  a = &s[i];
  p = a;
  k = @s[i];
  printf("\n");

  for(j=0;j<2;j++)
   printf("%d ",*(k + j));
 } 


 return 0;
}
