#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

FILE *fp;
char s[81];

fp = fopen("info.txt","r");

if(fp == NULL){
printf("Error\n");
exit(0);
}

while(fgets(s,80,fp)!=NULL){
printf("%s",s);
}
return 0;

}
