#include "link.h"

int main(int argc, char* argv[]){

int num,c=0;
int a=1,b;

num = atoi(argv[1]);

showbits(num);
printf("\n");

while(num!=0){

num = num>>1;
c=c+1;
}

b = c-1;

num = a<<b;

c = b-2;

while(c>0){
num = num | (a<<c);
c = c-2;
}

showbits(num);
printf("\n");

return 0;
}
