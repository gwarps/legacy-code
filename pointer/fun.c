#include "link.h"


//Function for sorted Insert
//Correct how to append or make a list in sorted order

void add(myNode** head, int data){

myNode* newNode=(myNode*)malloc(sizeof(struct node));
newNode->data=data;
newNode->next=NULL;

myNode* current=*head;
//If null or only one node

if(current==NULL || data<=current->data){

newNode->next=current;
*head=newNode;

}else{

while(current->next!=NULL){

if(data<=(current->next)->data){
newNode->next=current->next;
current->next=newNode;
return;
}
current=current->next;
}
newNode->next=current->next;
current->next=newNode;

}
}

void print_list(myNode* head){

myNode* current = head;
printf("\n\n");

while(current!=NULL){

printf("[%d]->",current->data);

current = current->next;

}

printf("[NULL]\n");
}
