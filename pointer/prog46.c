#include<stdio.h>
int main(){
char *name[6];
int i=0;

/*
while(i<6){
printf("%d ",*name[i]);
i++;
}*/
for(i=0;i<=5;i++){
printf("\nEnter Name:");
scanf("%s",name[i]);
}
return 0;
}
