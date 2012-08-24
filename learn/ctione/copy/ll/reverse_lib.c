#include "link.h"

void itr_reverse(struct node** head){
 struct node* result = NULL;
 struct node* temp = NULL;
 struct node* current = *head;

 
 while(current){
 temp = current->next;
  current->next = result;
  result = current;
  current = temp;

 }

 *head = result;
}

void rec_reverse(struct node** head){
 struct node* current = *head;
 if(!current){
  return;
 }
 
 struct node* rest = current->next;
 if(!rest){
  return;
 }
 
 rec_reverse(&rest);
 
 current->next->next = current;
 current->next = NULL;

 *head = rest;
}
