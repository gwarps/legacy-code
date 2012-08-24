#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char* l,char* m);
int main(){
 char str[] = "puneet singh";
 char *p;
 char *q;
 int len = strlen(str);
 char *x,*y;
 p = str;
 q = str;
 p = p + len-1;
 

 printf("%d\n",len);
 printf("%s\n",str);

 reverse(q,p);
 x = str-1;
 y = str;

 while(x++<p){
  if(*x=='\0' || *x==" "){
   reverse(y,x-1);
   y=x+1;
  }
 }
 
 printf("%s\n",str);
 
return 0;
}

void reverse(char *l,char *m){
 while(l<m){
  int temp = *l;
  *l = *m;
  *m = temp;
  m--;
  l++;
 }
}


