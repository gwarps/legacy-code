#include<stdio.h>
int main(){
const char *fun();
const char *p;
p=fun();
//*p='A';
printf("%s\n",p);
return 0;
}
const char *fun(){
return "Rain";
}
