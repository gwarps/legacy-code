#include<stdio.h>
#define FUN(i,j) i##j

int main(){

int val1 = 10;
int val12 = 20;

printf("%d\n",FUN(val1,2));

return 0;
}
