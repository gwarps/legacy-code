#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

char* p1 = "Four score and seven years ago ...";
char* p2 = "abcdefghijklmnopqrstuvwxyz";
char* temp= malloc(sizeof(p1));

strcpy(temp,p1);
printf("\n%s\n",temp);

memmove(temp+4,temp+16,10);
printf("After Memove without Overlapping: \n%s\n",temp);

strcpy(temp,p1);


memmove(temp+6,temp+4,10);
printf("After memmove with overlapping: \n%s\n",temp);

return 0;
}
