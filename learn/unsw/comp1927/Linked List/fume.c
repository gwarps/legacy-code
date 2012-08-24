#include "link.h"

void Push(struct node** head,int data){
struct node* current=*head;
struct node* newNode=malloc(sizeof(struct node));
newNode->data=data;
newNode->next=*head;
*head=newNode;
}
