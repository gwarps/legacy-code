#include<stdio.h>
#include<stdlib.h>

void generate_bit(int num){
 if(num){
  int temp = num % 2;
  num = num/2;
  generate_bit(num);
  printf("%d ",temp);
 }
}

int main(){
  generate_bit(10); 
  
  printf("\n");
return 0;
}
