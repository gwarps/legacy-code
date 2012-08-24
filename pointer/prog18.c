#include<stdio.h>

main(){
int marks[]={23,34,76,89,90,45};
int j,*k;

k=&marks[0];

for(j=0;j<6;j++,k++){
printf("Value: %d with address: %u\n",marks[j],k);
}
}
