#include "link.h"

//Function to add node to linked list at end
void add(int value){
temp=(myNode*)malloc(sizeof(struct node));
temp->next=(myNode*)0;
temp->data=value;

if(head==(myNode*)0){

head=temp;
tail=temp;

}else{

tail->next=temp;
tail=temp;

}
}

//Function to add to linked list without adding to Global Variables
void addwg(myNode** head,myNode** tail,int value){

myNode* newNode=(myNode*)malloc(sizeof(struct node));
newNode->next=(myNode*)0;
newNode->data=value;

myNode* current=*head;
myNode* end=*tail;

if(current==(myNode*)0){

current=newNode;
end=newNode;

}else{

end->next=newNode;
end=newNode;

}
*head=current;
*tail=end;

}
//Fuction to add to Double Linked list at end
void add_dnode(int value){
dNod *temp,*cur;
temp=(dNod*)malloc(sizeof(struct dnode));
temp->next=NULL;
temp->prev=NULL;

if(dhead==NULL){

printf("\nAdding a head pointer.\n");
dhead=temp;
dtail=temp;
temp->data=value;

}else{

cur=dhead;
while(cur->next!=NULL){
cur=cur->next;
}
cur->next=temp;
temp->prev=cur;
temp->data=value;
dtail=temp;

}
}
//Reverse Function [ITERATIVE]
void iterative_reverse(){
myNode* current=head;
myNode* temp=(myNode*)0;
myNode* rev=(myNode*)0;

while(current!=(myNode*)0){
temp=current->next;
current->next=rev;
rev=current;
current=temp;
}
head=rev;
}
//Reverse Function [RECURSIVE]
myNode* recursive_reverse(myNode* root){
if(root->next!=(myNode*)0){

recursive_reverse(root->next);
root->next->next=root;
return (root);

}else{

 head=root;
return (root);

}
}
//Reverse Function [RECURSIVE] without using Global Variables
myNode* recursive_reversewg(myNode* current, myNode* next){
myNode* ret;

if(current==(myNode*)0){
return ((myNode*)0);
}

ret=((myNode*)0);

if(current->next!=(myNode*)0){

ret=recursive_reversewg(current->next,current);

}else{

ret=current;

}

current->next=next;

return ret;
}

//Reverse Function for doubly linked list
void dreverse(){

dNod *cur,*temp,*save_next;

if(dhead==dtail)
return;

if(dhead==NULL || dtail==NULL)
return;

cur=dhead;

while(cur!=NULL){

printf("\ncur->data : [%d]\n",cur->data);
temp=cur->next;
save_next=cur->next;
cur->next=cur->prev;
cur->prev=temp;
cur=save_next;
}

temp=dhead;
dhead=dtail;
dtail=temp;

}
//Function to print Linked list
void print_list(){
printf("\n\n");
for(temp=head;temp!=(myNode*)0;temp=temp->next){

printf("[%d]->",temp->data);

}
printf("[NULL]\n\n");

}
//Functiom to print without using Global Variables
void print_listwg(myNode* head){
printf("\n\n");
myNode* temp=head;
while(temp!=(myNode*)0){
printf("[%d]->",temp->data);
temp=temp->next;
}
printf("[NULL]\n\n");
}
//Function to print the double linked list
void print_dlist(){
dNod* temp;

printf("\n---------------------------\n");
temp=dhead;
while(temp!=NULL){
printf("\n[%d]\n",temp->data);
temp=temp->next;

}
}
