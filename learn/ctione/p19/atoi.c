#include<stdio.h>
#include<stdlib.h>

int myAtoi(const char* string);


int main(int argc,char* argv[]){
int i;

for(i=0;i<argc;i++){

printf("argv[%d]: %s\n",i,argv[i]);

}

printf("Argument 1: %d\n",myAtoi(argv[1])+1);
printf("Argument 2: %d\n",myAtoi(argv[2])+2);
return 0;
}

int myAtoi(const char* string){
int value=0;
while(*string && (*string <= '9' && *string >= '0')){
//you can use assert
value = value*10 + (*string - '0');
string++;

}
return value;
}

