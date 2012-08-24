#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mem_move(void* to,const void* from,int size);
int main(){

char *p1,*p2;
int size;

p1 = malloc(sizeof(12));
memset(p1,12,'\0');
strcpy(p1,"ABCDEFGHI");
// p2 = "CDEFGHI"
p2 = p1 + 2;
size=10;

printf("%s\n",p1);
printf("%s\n",p2);
mem_move(p1,p2,size);
printf("%s\n",p1);
printf("%s\n",p2);
return 0;
}

void mem_move(void* to,const void* from,int size){
 unsigned char* p1;
 const unsigned char* p2;

 p1 = (unsigned char*)to;
 p2 = (const unsigned char*)from;

 p2 = p2+size;

 while(p2!=from && --p2!=to); 

 //Overlap
 if(p2!=from){
  p2 = (const unsigned char*)from;
  p2 = p2+size;
  p1 = p1+size;

  while(size-- != 0){
   *(p1--) = *(p2--);
  } 
 }else{
  *(p1++) = *(p2++); 
 }
}
