#include<stdio.h>

int main(){

int i = -235;
int j,k;

for(j=0;j<=5;j++){
k = i>>j;
printf("\n%d Right shift %d gives %d\n",i,j,k);
}

return 0;
}
