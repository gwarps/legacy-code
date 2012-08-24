#include "link.h"

void sum_list(struct node* a,struct node* b){


struct node* result = NULL;
int rem = 0;
int sum;
 while(a||b||rem){
  printf("%d\n",rem);
  sum = 0;
  if(a){
   sum+= a->data;
   a = a->next;
  }
  
  if(b){
  sum+= b->data;
  b = b->next;
  }
  sum+=rem;
  if(sum>=10){
   rem = 1;
   sum = sum-10;
  }else{
   rem = 0;
  }
 
  push(&result,sum);

 }

 print(result);
}
