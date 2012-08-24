#include "link.h"

void push(struct node** head,int data){

struct node* newNode = malloc(sizeof(struct node));

newNode->data = data;
newNode->next = *head;

*head = newNode;
}

void print(struct node* head){
 while(head){
  printf("[%d]->",head->data);
  head = head->next;
 }
 printf("[NULL]\n");
}
