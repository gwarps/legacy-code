#include "link.h"

void add(myNode** head,int data){
myNode* newNode = malloc(sizeof(myNode*));
newNode->data = data;
newNode->next = NULL;

myNode* current = *head;

if(current==NULL){
*head=newNode;
}else{
while(current->next!=NULL)
current=current->next;

current->next = newNode;
}
}

void print_list(myNode* head){
printf("\n");
myNode* temp = head;
while(temp!=NULL){
printf("[%d]->",temp->data);
temp = temp->next;
}
printf("[NULL]\n");
}

myNode* MidThird(myNode* head){

myNode* slow;
myNode* fast;

if(head==NULL||head->next==NULL||head->next->next==NULL)
return head;

slow = head;
fast = head->next->next;

while(fast!=NULL && fast->next!=NULL){
fast = fast->next->next;
if(fast!=NULL){
slow = slow->next;

if(fast->next!=NULL)
fast = fast->next->next;
else
fast=fast->next;

}
}

return slow;
}

myNode* MidDiv(myNode* head){

myNode* current = head;
myNode* mid = head;
int i=1;

while(current!=NULL){
if(i>3&&(i%3==0))
mid = mid->next;
current=current->next;
i++;
}
return mid;
}
