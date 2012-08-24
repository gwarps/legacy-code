#include"link.h"

struct node* BuildList(int num){
struct node* temp;
temp=malloc(sizeof(struct node));
temp->data=num;
temp->next=NULL;
return temp;
}
int count(struct node* head){
int count=0;
struct node* current=head;
while(current!=NULL){
count++;
current=current->next;
}
return count;
}
struct node* InsertAtStart(struct node* head,int data){
struct node* newNode=malloc(sizeof(struct node));
newNode->data=data;
newNode->next=head;

return newNode;
}
void PrintElem(struct node* head){
int count=0;
struct node* temp=head;
while(temp!=NULL){

printf("Data at position %d is %d\n",count,temp->data);
count++;
temp=temp->next;

}
}
void WrongPush(struct node* head,int data){
struct node* newNode=malloc(sizeof(struct node));
newNode->data=data;
newNode->next=head;
head=newNode;
}
void Push(struct node** headRef,int data){
struct node* newNode=malloc(sizeof(struct node*));
newNode->data=data;
newNode->next=*headRef;
*headRef=newNode;
}

//Append function without using Push
void AppendNode(struct node** headRef, int data){
struct node* newNode=malloc(sizeof(struct node));
struct node* current=*headRef;
newNode->data=data;
newNode->next=NULL;

if(current==NULL){
*headRef=newNode;
}else{
while(current->next!=NULL){
current=current->next;
}
current->next=newNode;
//*headRef=current;
}
}
//Append using push function at the start
void AppendNodeWithPush(struct node** headRef,int data){
struct node* newNode=malloc(sizeof(struct node));
struct node* current=*headRef;

if(current==NULL){
Push(headRef,data);
}else{
while(current->next!=NULL){
current=current->next;
}
Push(&(current->next),data);
}
}
//Function for Copying into another list
struct node* copyList(struct node* headRef){
struct node* current=headRef;
struct node* newNode=NULL;
struct node* tail=NULL;

while(current!=NULL){
if(newNode==NULL){
newNode=malloc(sizeof(struct node));
newNode->data=current->data;
newNode->next=NULL;
tail=newNode;
}else{
tail->next=malloc(sizeof(struct node));
tail=tail->next;
tail->data=current->data;
tail->next=NULL;
}
current=current->next;
}
return newNode;
}

//Function for copying list using Push function
struct node* copyListUsingPush(struct node* headRef){
struct node* current=headRef;
struct node* newNode=NULL;
struct node* tail=NULL;
while(current!=NULL){
if(newNode==NULL){
Push(&newNode,current->data);
tail=newNode;
}else{
Push(&(tail->next),current->data);
tail=tail->next;
}
current=current->next;
}
return newNode;
}
//Function to count the total no. of nodes in the list
int Count(struct node* head,int searchFor){
struct node* copy=head;
int count=0;
while(copy!=NULL){
if(copy->data==searchFor){
count++;
}
copy=copy->next;
}
return count;
}
//Function to delete the whole list

void DeleteList(struct node** head){
struct node* current=*head;
struct node* next=NULL;

while(current!=NULL){
next=current->next;
free(current);
current=next;
}
*head=NULL;
}

//Function to pop the element from the top
int Pop(struct node** head){
struct node* current = *head;
assert(*head!=NULL);
struct node* next=NULL;
int result;
next = current -> next;
result=current->data;
free(current);
*head = next;
return result;
}

//Function to insert a node at a specified index
void InsertNthOne(struct node** head,int index,int data){
struct node* current=*head;
struct node* newNode=malloc(sizeof(struct node));
newNode->data=data;
newNode->next=NULL;
int count=0;
if(index==0){
newNode->next=*head;
*head=newNode;
}else{
while(count<index-1){
printf("\n%d Counter\n",count);
assert(current->next!=NULL);
current=current->next;
count++;
}
if(current->next==NULL){
printf("Current==NULL\n");
current->next=newNode;
}else{
Push(&(current->next),data);
}
}
}

//Self constructed function for sorted insert
void SortedInsertOne(struct node** head,int data){
struct node* current=*head;
if(data<=current->data){
Push(head,data);
}else{
while(current->next!=NULL){
if(data<=current->next->data){
break;
}
current=current->next;
}
Push(&(current->next),data);
}
}
//Standard function for sorted insert
void SortedInsert(struct node** headRef, struct node* newNode) {
//Special case for the head end
if(*headRef == NULL || (*headRef)->data >= newNode->data) {
newNode->next = *headRef;
*headRef = newNode;
}else {
 // Locate the node before the point of insertion
struct node* current = *headRef;
while (current->next!=NULL && current->next->data<newNode->data) {
current = current->next;
}
newNode->next = current->next;
current->next = newNode;
}
}
void InsertSortOne(struct node** head){
struct node* result=NULL;
struct node* current=*head;
while(current!=NULL){
if(result==NULL){
Push(&result,current->data);
}else{
SortedInsertOne(&result,current->data);
}
current=current->next;
}
*head=result;
}
void Append(struct node** listOne, struct node** listTwo){
struct node* current = *listOne;
while(current->next!=NULL){
current=current->next;
}
current->next=*listTwo;
*listTwo=NULL;
}
void FrontBackSplit(struct node* source,struct node** listOne,struct node** listTwo){
int len=count(source);
int i;
struct node* current=source;
if(len<2){
*listOne=source;
*listTwo=NULL;
}else{
int hopCount=(len-1)/2;
for(i=0;i<hopCount;i++){
current=current->next;
}

*listOne=source;
*listTwo=current->next;
current->next=NULL;
}
}
//Function to reverse the whole list
void ReverseList(struct node** head){
struct node* current=*head;
struct node* temp=NULL;
struct node* rev=NULL;
assert(current!=NULL);
while(current!=NULL){
temp=current->next;
current->next=rev;
rev=current;
current=temp;
}
*head=rev;
}

//Function to delete duplicates
void RemoveDuplicates(struct node* head){
struct node* current=head;
struct node* temp=NULL;
assert(current!=NULL);
if(current->next==NULL){
printf("Only one element\n");
}else{
while(current->next!=NULL){
temp=current->next;
if(temp->data==current->data){
current->next=temp->next;
free(temp);
}else{
current=current->next;
}
}
}
}
//Function to Move first node from one list to another
void MoveNode(struct node** dest,struct node** source){
struct node* newNode=*source;
assert(newNode!=NULL);
*source=newNode->next;
newNode->next=*dest;
*dest=newNode;
}
//Function for Alternating Split
void AlternatingSplit(struct node* source,struct node** listOne,struct node** listTwo){
struct node* current=source;
struct node* one=NULL;
struct node* two=NULL;

while(current!=NULL){
MoveNode(&one,&current);
if(current!=NULL){
MoveNode(&two,&current);
}
}
*listOne=one;
*listTwo=two;
}
