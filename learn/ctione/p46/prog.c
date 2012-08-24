#include<stdio.h>
#include<stdlib.h>

void decimal_to_anybase(int num,int base);

int main(int argc,char* argv[]){

int num = atoi(argv[1]);
int base = atoi(argv[2]);

decimal_to_anybase(num,base);
printf("\n-----------------------\n");
return 0;
}

//Function for convert

void decimal_to_anybase(int num,int base){

char result[1000];
int i=0,j;
while(num){
char bit = num % base;
result[i] = "0123456789ABCDEFGHIJKLMNOPQRSTUVXYZ"[bit];
i++;
num = num/base;
}

for(j=i-1;j>=0;j--)
printf("%c",result[j]);
}
