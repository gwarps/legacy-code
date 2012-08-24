#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){


char *a[6];
char aux[50];
int i;
int len;

 for(i=0;i<6;i++){
  printf("Enter Name::%d ",i);
  gets(aux);
  len = strlen(aux);

  a[i] = malloc(sizeof(len+1));
  strcpy(a[i],aux);

 }

 for(i=0;i<6;i++){
  printf("%s\n",a[i]);
 }


 return 0;
}
