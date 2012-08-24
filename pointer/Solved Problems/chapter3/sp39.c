#include<stdio.h>

int main(){

char *str[] = {"Frogs","Do","Not","Die","They","Croak!"};
printf("%d %d\n",sizeof(str),sizeof(str[0]));

return 0;
}
