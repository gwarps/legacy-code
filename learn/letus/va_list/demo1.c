#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

//Function that takes variable no. of argument
void sum(int x, ...);

int main(){
sum(12,10,9.2); 
return 0;
}

void sum(int x, ...){
 //Variable capable of storing multiple variable-length argument list
 va_list a_list;
 float sig = 0.00;
//Initialized for subsequent use by the functions va_arg and va_end
 va_start(a_list,x);
 printf("Argument 0: %d\n",x);
//va_arg return next argument at a time with type specified
 printf("Argument 1: %d\n",va_arg(a_list,int));
 printf("Argument 2: %f\n",va_arg(a_list,double));
 printf("Argument 2: %s\n",va_arg(a_list,char*));
//Clean up the list
 va_end(a_list);
}
