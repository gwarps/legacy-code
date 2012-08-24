#include<stdio.h>
#include<stdlib.h>

//not consistent
char* xstrcpy(char* dest,  char* src){

char*ptr = dest;

while(*src!='\0'){

*dest = *src;
dest++;
src++;
}
*dest = '\0';
return ptr;
}

//Another function
char* mystrcpy(char dest[], const char src[]){
int i=0;

while(src[i]!='\0'){

dest[i] = src[i];
i++;
}
dest[i] = '\0';

return dest;
}

int main(){

char* str1 = "abcdef";
//char* str2 = malloc(1);
char str2[2];

mystrcpy(str2,str1);

printf("\n%s\n",str2);
//printf("\n%s\n",str1);
return 0;
}
