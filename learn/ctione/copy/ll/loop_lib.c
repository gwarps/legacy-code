#include "link.h"

int loop(struct node* head){
 struct node* current = head;
 while(current->next){
  struct node* temp = head;
  if (current->next==temp){
   return 1;
  }
  while(temp->next && temp!=current){
   if(current->next==temp){
    return 1;
   }
   temp = temp->next;
  }
  current = current->next;
 }
 return 0;
}

// Loop detect using slow fast pointer
int loop_sf(struct node* head){

 struct node* current = head;
 struct node* slow = current;
 struct node* fast = current;

 while(fast){
  if(fast->next==slow){
   return 1;
  } 
  fast = fast->next;

  if(fast){
   if(fast->next == slow){
    return 1;
   }
   fast = fast->next;
   slow = slow->next;
  } 

 }

 return 0;
}
