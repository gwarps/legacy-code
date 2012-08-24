#include "link.h"

void insert(myNode** head,int data){

myNode* newNode = malloc(sizeof(myNode*));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;

if(*head == NULL){
*head = newNode;
}else{

if(data<((*head)->data)){
insert(&((*head)->left),data);
}else if(data>((*head)->data)){
insert(&((*head)->right),data);
}else{
printf("\nData: %d cannot be inserted\n",data);
}
}
}

void print_tree(myNode* node){

if(node==NULL){
return;
}

print_tree(node->left);
printf("%d ",node->data);
print_tree(node->right);

}

void nthInorder(myNode* head,int index,myNode** temp){

int static found=0;
int static count;

if(!found){

if(head){
nthInorder(head->left,index,temp);

if(++count==index){
printf("\nFound %dth node\n",index);
found = 1;
*temp = head;
}

nthInorder(head->right,index,temp);
}
}
}
