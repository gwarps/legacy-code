#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *mymemmove(void* dest, const void* src,size_t count);
int main(){

char *p1,*p2,*p3,*p4;
int size;

p1=(char*)malloc(12);
memset(p1,12,'\0');
size=10;

strcpy(p1,"ABCDEFGHI");
p2 = p1+2;

printf("\n------------------------------------\n");
printf("\nSrc (before) = [%s]",p1);
printf("\nDest (before)= [%s]",p2);

mymemmove(p2,p1,size);

printf("\nSrc (after) = [%s]",p1);
printf("\nDest (after)= [%s]",p2);


printf("\n-------------------------------------\n");
return 0;
}

void *mymemmove(void* dest,const void* src,size_t size){

unsigned char* p1;
const unsigned char *p2;

p1 = (unsigned char *)dest;
p2 = (unsigned const char *)src;

p2 = p2+size;

while(p2!=src && --p2!=dest);

if(p2!=src){
//Overlap detected
p2 = (const unsigned char*)src;
p2=p2+size;
p1=p1+size;

while(size--!=0){

*(--p1) = *(--p2);
}
}else{
//no overlap
while(size--!=0){
*p1++ = *p2++;
}
}
return dest;
}
