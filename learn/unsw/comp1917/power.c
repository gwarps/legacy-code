#include<stdio.h>

#define MAXPOWER 10

int power(int base,int n){
int i,p;

for(i=1,p=1;i<=n;i++){
p=p*base;
}

return p;
}

static int f(int x){
return x;
}
