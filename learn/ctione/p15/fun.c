#include "link.h"

void add(myNode** head,int data){

myNode* temp = malloc(sizeof(struct node*));
temp->data=data;
temp->next=*head;

*head=temp;


}



void print_list(myNode* head){

printf("\n\n");

myNode* current = head;

while(current!=(myNode*)0){
printf("[%d]->",current->data);
current = current->next;

}
printf("[NULL]\n");
}

void SortedInsert(myNode** head,myNode* newNode){

myNode* current = *head;

if(current == NULL || newNode->data<current->data){
newNode->next = current;
*head = newNode;
}else{
while(current->next->data < newNode->data && current->next != NULL){
current = current->next;
}
newNode->next = current->next;
current->next = newNode;
}
}
