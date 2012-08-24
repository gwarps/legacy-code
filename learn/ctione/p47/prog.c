#include<stdio.h>

int powerTwo(int num){
if(!(num&(num-1))&& num)
return 1;
else
return 0;
}

int main(int argc,char* argv[]){
int num = atoi(argv[1]);
if(powerTwo(num))
printf("\nPerfect Power\n");
else
printf("\nNope\n");

return 0;
}

