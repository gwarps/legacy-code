#include "dlink.h"

void itr_reverse(struct node** head){
 struct node* current = *head;
 if(!current || !current->next){
  return;
 }
 
 struct node* temp = NULL;
 struct node* result = NULL;

 while(current){
  temp = current->next;
  current->next = result;

  if(result){
   result->prev = current;
  }
   
  result = current;
  current = temp;
 }
 result->prev = NULL;
 *head = result;
}
