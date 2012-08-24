#include "dlink.h"

void push(struct node** head,int data){
 struct node* newNode = malloc(sizeof(struct node));
 newNode->data = data;
 newNode->next = NULL;
 newNode->prev = NULL;

 struct node* current = *head;
 
 if(current){
  newNode->next = current;
  current->prev = newNode;
 }
   
 *head = newNode;
}

void print(struct node* head){

 while(head){
  printf("[%d]->",head->data);
  head = head->next;
 }
 printf("[NULL]\n");

}


void print_tail(struct node* head){

 while(head->next){
  head = head->next;
 } 
 
 while(head){
  printf("[%d]->",head->data);
  head = head->prev;
 }
 printf("[NULL|HEAD]\n");
}
