#include "link.h"

void Push(myNode** head, int data){

myNode* newNode = malloc(sizeof(struct node));
myNode* current = *head;

newNode->data=data;
newNode->next=current;

*head=newNode;
}
//Print function for list
void print_list(myNode* head){

printf("\n\n");
myNode* temp = head;

while(temp!=(myNode*)0){
printf("[%d]->",temp->data);
temp=temp->next;
}
printf("[NULL]\n\n");
}

myNode* find_node(myNode* head,int index){

myNode* ret=NULL;
myNode* cur=head;
int count=0;

while(count!=index){

assert(cur->next!=NULL);
cur=cur->next;
count++;
}

ret=cur;

return ret;
}

void sdelete_bynode(myNode** head,myNode* delNode){

myNode* current=*head;
myNode* temp=NULL;
if(current==delNode){

temp=current;
current=current->next;


}else{

while(current->next!=delNode){

current=current->next;

}

temp=current->next;
current->next=temp->next;
current=*head;
}

free(temp);

*head=current;
}

//================================================
//Circular linked list functions
void Circular_Push(myNode** head,myNode** tail,int data){
myNode* newNode = (myNode*)malloc(sizeof(struct node));
newNode->data=data;
newNode->next=NULL;

myNode* current = *head;
myNode* late=*tail;

if(current==NULL){

printf("\nAdding head pointer\n");
current=newNode;
*tail=newNode;
newNode->next=current;

}else{
newNode->next=current;
late->next=newNode;
}

*head=newNode;
}

void Circular_print(myNode* head,myNode* tail){
printf("\n\n");
myNode* temp = head;


do{
printf("[%d]->",temp->data);
temp=temp->next;
}while(temp!=tail->next);

//printf("->[%d]\n\n",tail->next->data);
}
