#include "tree.h"

void insert(myNode** root,int data){

myNode* newNode = malloc(sizeof(myNode*));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;

if(*root == NULL){
*root = newNode;
return;
}else{
if(data < (*root)->data)
insert(&((*root)->left),data);
else
insert(&((*root)->right),data);

}
}

//Print Inorder
void print_inorder(myNode* root){
if(root == NULL)
return;
else{
print_inorder(root->left);
printf("%d ",root->data);
print_inorder(root->right);
}
}
//If two trees are same
int isSame(myNode* a,myNode* b){

if(a==NULL && b==NULL)
return 1;
else{
if(a!=NULL && b!=NULL)
return((a->data == b->data)&&isSame(a->left,b->left)&&isSame(a->right,b->right));
else
return 0;
}
}

//Search tree function
myNode* search(myNode* head,int data){
if(head==NULL)
return NULL;

if(data == head->data)
return head;
else{
if(data < head->data)
return (search(head->left,data));
else
return (search(head->right,data));

}
}

//Is Sub
int isSub(myNode* head,myNode* node){
if(node == NULL)
return 1;
else{
myNode* temp = search(head,node->data);

if(temp!=NULL)
return (isSame(temp,node));
else
return 0;
}
}
