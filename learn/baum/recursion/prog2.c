#include<stdio.h>
#include<stdlib.h>

int rec_sum(int,int);
int main(int argc,char* argv[]){
 int a = atoi(argv[1]);
 int b = atoi(argv[2]);

 printf("Sum is: %d\n",rec_sum(a,b));
return 0;
}

int rec_sum(int a,int b){
 int c = 1;

 if(b==0){
  return a;
 }else{
  if(b<0){
   b++;
   c = -1;
  }else{
   b--;
   c = 1;
  }
  return rec_sum(a,b) + c;
 }
}
