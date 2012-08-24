#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

char message1[60] = "Four score and seven years ago ...";
char message2[60] = "abcdefghijklmnopqrstuvwxyz";

char temp[60];

strcpy(temp,message2);
printf("\n%s\n",temp);

memmove(temp+4,temp+16,10);
printf("After Memove without Overlapping: \n%s\n",temp);

strcpy(temp,message2);
memmove(temp+6,temp+4,10);
printf("After memmove with overlapping: \n%s\n",temp);
return 0;

}
