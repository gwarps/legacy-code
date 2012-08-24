#include<stdio.h>

int main(int argc,char* argv[]){
int a,b,c,max;

a = atoi(argv[1]);
b = atoi(argv[2]);
c = atoi(argv[3]);

max = ((a>b?(a>c?a:c):(b>c?b:c)));

printf("Max: %d\n",max);

return 0;
}
