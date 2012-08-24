#include "link.h"


//Function for STACK PUSH OPS

void Push(myNode** head,int data){

myNode* current = *head;
myNode* new = (myNode*)malloc(sizeof(struct node));
new->data=data;

new->next=current;
*head=new;

}

void Pop(myNode** top){

myNode* current = *top;
int data;
assert(current!=NULL);

myNode* next = current->next;
data=current->data;

*top=next;
free(current);
printf("\n %d Popped from stack\n",data);
}

//Print STACK Contents
void print_stack(myNode* head){

myNode* current = head;
printf("\n\n");
printf("TOP->");
while(current!=NULL){

printf("[%d]->",current->data);

current = current->next;

}

printf("[NULL]\n");
}
