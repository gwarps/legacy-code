#include "link.h"


//Function for Push at start
void Push(myNode** head,int data){

myNode* newNode = (myNode*)malloc(sizeof(struct node));
myNode* current = *head;


newNode->data = data;
newNode->next = current;
newNode->prev = NULL;
if(current == NULL){

*head = newNode;

}else{

current->prev = newNode;

*head = newNode;
}

}


//Function for append at end

void Append(myNode** head,int data){

myNode* current = *head;
myNode* newNode = (myNode*)malloc(sizeof(struct node));

newNode->data = data;
newNode->next = NULL;
newNode->prev = NULL;

if(current == NULL){
*head = newNode;
}else{

while(current->next != NULL){

current=current->next;
}
current->next=newNode;
newNode->prev=current->next;

}

}



//Function for printing linked list
void print_list(myNode* head){

printf("\n\n");
myNode* temp = head;

while(temp!=(myNode*)0){
printf("[%d]->",temp->data);
temp=temp->next;
}
printf("[NULL]\n\n");
}

