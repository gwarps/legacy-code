#include<stdio.h>
#include<string.h>

void strcpy(char*,char*);

int main(){

char str1[] = "Keep India Beautiful...emigrate";
char str2[40];

strcpy(str2,str1);
printf("%s\n",str2);




return 0;
}

void strcpy(char* t,char* s){

printf("\nUsing my version\n");
while(*s){

*t = *s;

t++;
s++;

}

*t = '\0';

}
