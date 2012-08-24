#include<stdio.h>
#include<string.h>

int main(){

char* str = "12345678";

memmove(str+2,str+1,1);

printf("\n%s\n",str);

return 0;
}
