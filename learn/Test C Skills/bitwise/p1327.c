#include "link.h"

int main(int argc,char* argv[]){

int num,n,temp,count=0;

num = atoi(argv[1]);
n = atoi(argv[2]);

showbits(num);

temp = num;

while(temp!=0){
temp = temp>>1;
count = count + 1;
}

temp = (num>>00) & (~(~0<<n));
num = num>>n;
temp = temp << (count-n);

num = num|temp;
printf("\n");
showbits(num);

printf("\n----------------\n");
return 0;
}

