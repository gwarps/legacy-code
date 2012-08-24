#include "link.h"
void add(myNode** head,int data){

myNode* newNode = malloc(sizeof(myNode*));
newNode->data = data;
newNode->next = *head;

*head = newNode;
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

//Dummy Node Shuffle without using MoveNode

myNode* ShuffleOne(myNode* a,myNode* b){

myNode dummy;
myNode* tail = &dummy;
dummy.next = NULL;

while(1){

if(a==NULL){
tail->next = b;
break;
}else if(b==NULL){
tail->next = a;
break;
}else{

tail->next = a;
tail=a;
a = a->next;

tail->next = b;
tail = b;
b = b->next;

}
}

return dummy.next;
}

myNode* Recursive_Shuffle(myNode* a,myNode* b){

myNode* result;
myNode* recur;

if(a == NULL){
return b;
}
else if(b == NULL){
return a;
}
else{

recur = Recursive_Shuffle(a->next,b->next);
result = a;
a->next = b;
b->next = recur;

return result;
}
}

