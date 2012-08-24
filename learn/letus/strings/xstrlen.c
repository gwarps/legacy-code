#include<stdio.h>
#include<string.h>

int xstrlen(char* pt);
int main(){
 
char str[] = "Hello World";

printf("%d\n",strlen(str));
printf("%d\n",xstrlen(str));
return 0;
}

int xstrlen(char* pt){

int i=0;

while((*pt)!='\0'){
 i++;
 pt++;
}

return i;

}
