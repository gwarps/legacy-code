#include<stdio.h>
#define TRUE 1
#define FALSE 0

int wildcard(char* string,char* pattern);

int main(){

char* string = "hereheroherr";
char* pattern = "herr*";

if(wildcard(string,pattern)==TRUE)
printf("\nMatch Found !!\n");
else
printf("\nMatch Not Found !!\n");

return 0;
}

int wildcard(char* string, char* pattern){

while(*string){

switch(*pattern){

case '*': do{
	    ++pattern;
	    }while(*pattern == '*');
	  
	  if(!*pattern)
	  return TRUE;
        
          while(*string){
	    if(wildcard(string++,pattern)==TRUE)
		return TRUE;
	  }
	  return FALSE;

default: if(*pattern != *string)
	 return FALSE;
	 break;
}
++string;
++pattern;
}
while(*pattern == '*')
++pattern;

return (!*pattern);
}

