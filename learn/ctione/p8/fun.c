#include "link.h"

//Add function at start
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

myNode* midCount(myNode* head){
int i;
myNode* middle = NULL;
myNode* temp = head;
i=1;
while(temp!=(myNode*)0){

if(i==1){
middle = temp;
}else if((i%2)==1){
middle = middle->next;

}
i++;
temp=temp->next;
}
return middle;

}

myNode* midFastSlow(myNode* head){

myNode* slow = head;
myNode* fast = head;

if(head==NULL || head->next==NULL){
slow = head;
fast = NULL;
}else{
while(fast!=NULL){
fast=fast->next;
if(fast!=NULL){
slow=slow->next;
fast=fast->next;
}
}

}
return slow;
}
