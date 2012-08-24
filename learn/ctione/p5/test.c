#include<stdio.h>

int func(int,int);

int main(){

int k;
int (*fp)(int,int);
fp = &func;

k = (*fp)(2,3);

printf("\n%d\n",k);

return 0;
}

int func(int a,int b){

return a+b;

}
