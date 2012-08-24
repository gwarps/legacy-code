#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

FILE *fp;
char s[80];


fp = fopen("info.txt","w");

if(fp==NULL){
printf("Error\n");
exit(0);
}

while(strlen(gets(s))>0){
fputs(s,fp);
fputs("\n",fp);
}

fclose(fp);
return 0;
}
