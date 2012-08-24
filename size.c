#include<stdio.h>

int main(){

printf("Integer: %d\n",sizeof(int));
printf("Float: %d\n",sizeof(float));
printf("Char: %d\n",sizeof(char));
//printf("Char: %d\n",sizeof('3'));
//Representing like 4 bytes. But why? yet char is 1 byte
printf("Double: %d\n",sizeof(double));
printf("Pointer int: %d\n",sizeof(int*));
printf("Pointer float: %d\n",sizeof(float*));
printf("Pointer char: %d\n",sizeof(char*));
printf("Unsigned short int: %d\n",sizeof(unsigned short int));

return 0;

}
