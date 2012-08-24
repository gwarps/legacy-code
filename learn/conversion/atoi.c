#include<stdio.h>
#include<stdlib.h>

int main(){
 char str[10];

 gets(str);
 printf("Number is %d\n",atoi(str) + 4);

return 0;
}
