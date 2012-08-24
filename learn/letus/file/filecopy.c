#include<stdio.h>
#include<stdlib.h>
int main(){

FILE *fp,*dp;
char ch;

fp = fopen("../lock.c","r");

if(fp == NULL){
printf("Error opening the file\n");
exit(0);
}

dp = fopen("lock.c","w");
if(dp == NULL){
printf("Error opening dest file\n");
exit(0);
}

while(1){

ch = fgetc(fp);

if(ch == EOF)
break;
else
fputc(ch,dp);

}
fclose(fp);
fclose(dp);


return 0;
}
