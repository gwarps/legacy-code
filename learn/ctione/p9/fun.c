#include "link.h"

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

int compare_linkd(myNode* list1,myNode* list2){

static int flag;
if(list1==NULL && list2==NULL){
flag = 1;
}else{
if(list1==NULL || list2==NULL){
flag=0;
}
if(list1->data != list2->data){
flag=0;
}else{
compare_linkd(list1->next,list2->next);
}
}
return flag;
}


