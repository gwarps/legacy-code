#include<stdio.h>

 int main(){
 
 int *p;
 int k = 12;
 
 p = &k;
 printf("%d %u %d\n",*p,p,k);
 *p = 14;
 printf("%d %u %d\n",*p,p,k);
 return 0;
}
