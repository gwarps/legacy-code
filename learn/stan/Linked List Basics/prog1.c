#include<stdio.h>
#include<stdlib.h>

//Function Prototype
struct node* BuildList(int num);
int count(struct node* head);
struct node* InsertAtStart(struct node* head,int data);
void PrintElem(struct node* head);
void WrongPush(struct node* head,int data);
void Push(struct node** headRef,int data);
void AppendNode(struct node** headRef, int data);
void AppendNodeWithPush(struct node** headRef,int data);
struct node* copyList(struct node* headRef);
struct node* copyListUsingPush(struct node* headRef);

//Node Structure
struct node{
int data;
struct node* next;
}

main(){

struct node* head=NULL;
struct node* copyListNode=NULL;
int option=10;
int input1,input2,input3,input4,input5,input6;
while(option!=0){
printf("\nSelect one of the following:-\n");
printf("0. EXIT\n");
printf("1. Make a new list\n");
printf("2. Add element at front\n");
printf("3. Count Elements\n");
printf("4. Print all elements sequentially in list\n");
printf("5. WrongPush testing insert at top\n");
printf("6. Push at start using double pointer\n");
printf("7. Append at end without using push\n");
printf("8. Append at end with using Push\n");
printf("9. Copy Into new List\n");
printf("10. Copy Into new List Using Push\n");
printf("11. Print all elements of copied list\n");
scanf("%d",&option);

switch(option){
case 0: system("clear");
	break;
case 1: printf("Please enter a number you want to insert at first position: \n");
	scanf("%d",&input1);
	head=BuildList(input1);
	printf("Element %d inserted in list at position 1\n",head->data);
	break;
case 2: printf("Enter a number you want to insert at front: \n");
	scanf("%d",&input2);
	head=InsertAtStart(head,input2);
	break;
case 3: printf("%d elements in the list\n",count(head));
	break;
case 4:	PrintElem(head);
	break;
case 5: printf("Enter a number you want to insert at front: \n");
	scanf("%d",&input3);
	WrongPush(head,input3);
	break;
case 6: printf("Enter a number you want to insert at front: \n");
        scanf("%d",&input4);
        Push(&head,input4);
        break;
case 7: printf("Enter a number you want to insert at END: \n");
        scanf("%d",&input5);
	AppendNode(&head,input5);
	break;
case 8: printf("Enter a number you want to insert at END: \n");
        scanf("%d",&input6);
        AppendNodeWithPush(&head,input6);
        break;
case 9: printf("Copying List....\n");
	copyListNode=copyList(head);
	break;
case 10:printf("Copying List....\n");
	copyListNode=copyListUsingPush(head);
	break;
case 11:PrintElem(copyListNode);
	break;
default:printf("Invalid Input\n");
	break;	
}
}
}
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
count++;
printf("Data at position %d is %d\n",count,temp->data);
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
struct node* copyListUsingDummy(struct node* headRef){
struct node* current=headRef;
struct node* tail=NULL;
struct node* dummy;

dummy.next=NULL;
tail=&dummy;

while(current!=NULL){
Push(&(tail->next),current->data);
tail=tail->next;
current=current->next;
}
return (dummy.next);
}

//Not Tested
struct node* copyListUsingReference(struct node* headRef){
struct node* current=headRef;
struct node* copyList=NULL;
struct node** tail;
tail=&headRef;
while(current!=NULL){
Push(tail,current->data);
current=current->next;
tail=&((*tail)->next);

}
return headRef;
}
