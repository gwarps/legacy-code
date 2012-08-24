#include<stdio.h>
#include<string.h>

void xstrcpy(char* dest,char* src);
int main(){
 char str[] = "Quantam of Solace";
 char cp1[10];
 char cp2[10];
 
 strcpy(cp1,str);
 printf("%s\n",str);
 xstrcpy(cp2,"Hello world");

 printf("%s\n",cp1);
 printf("%s\n",cp2);

 return 0;
}


void xstrcpy(char* dest,char* src){
 
 while(*src != '\0'){
  
  *dest = *src;
  src++;
  dest++;
 } 

 *dest='\0';
}
