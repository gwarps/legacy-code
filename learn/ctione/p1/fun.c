#include "link.h"

void add(int data,myNode** head,myNode** tail){

myNode* newNode = malloc(sizeof(myNode*));
newNode->next = NULL;
newNode->prev = NULL;

myNode* front = *head;
myNode* back;


if(front == NULL){
newNode->data = data;
*head = newNode;
back = newNode;
}else{

while(front->next != NULL)
front = front->next;

front->next = newNode;
newNode->prev = front;
newNode->data = data;
back = newNode;

}


*tail = back;

}
void print_list(myNode* head){

myNode* current = head;

while(current!=NULL){

printf("[%d]-> ",current->data);
current = current->next;

}

printf("NULL\n");
}

void reverse(myNode** head,myNode** tail){

myNode* temp;
myNode* save_next;
myNode* current;
if(*head == *tail)
return;

if(*head == NULL || *tail == NULL)
return;

current = *head;
while(current!=NULL){
temp = current->next;
save_next = current->next;
current->next = current->prev;
current->prev = temp;
current = save_next;
}

temp = *head;
*head = *tail;
*tail = temp;
}
