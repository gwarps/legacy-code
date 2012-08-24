#include "link.h"
//Array based implementation
void BubbleSort(int seq[],int num){

int i,j;

for(i=num-1;i>0;i--){

for(j=1;j<=i;j++){
if(seq[j-1]>seq[j]){
swap(&seq[j-1],&seq[j]);
}
}
}
}

void SmartBubbleSort(int seq[],int num){
int i,j;
int earlyExit=0;
for(i=num-1;i>0 && !earlyExit;i--){
earlyExit=1;
for(j=1;j<=i;j++){
if(seq[j-1]>seq[j]){
swap(&seq[j-1],&seq[j]);
earlyExit=0;
}
}
}


}

void print_array(int seq[],int num){
int i=0;

while(i<num){

printf(" %d",seq[i]);
i++;
}
printf("\n");

}

void swap(int* a,int* b){
int temp = *a;
*a=*b;
*b=temp;
}

//Linked list based implementation


void add(myNode** head,int data){
myNode* newNode = malloc(sizeof(myNode*));
newNode->data = data;
newNode->next=*head;
*head=newNode;
}

void print_list(myNode* head){
myNode* current = head;

while(current!=NULL){
printf("[%d]->",current->data);
current=current->next;
}
printf("[NULL]\n");


}

int count(myNode* head){
int count=0;
myNode* current = head;

while(current!=NULL){
count++;
current=current->next;
}
return count;
}

void BubbleSortL(myNode** head,int num){

myNode *p0,*p1;
myNode *p2,*p3;
myNode *current;
current = *head;

int i,j;

for(i=1;i<num;i++){


p0 = (myNode*)0;
p1 = current;
p2 = current->next;
p3 = p2->next;

for(j=1;j<=num-i;j++){

if(p1->data > p2->data){
p1->next = p3;
p2->next = p1;

//will not execute on first time
if(p0){
p0->next=p2;
}

//only for first time
if(current==p1){
current=p2;
}

//pointer progress
p0=p2;
p2=p1->next;
p3 = p3->next!=(myNode*)NULL?p3->next:NULL;
}else{
p0=p1;
p1=p2;
p2=p3;
p3 = p3->next!=(myNode*)NULL?p3->next:(myNode*)NULL;
}

}

}

*head=current;
}
