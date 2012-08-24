#include "tree.h"

struct node* new_node(int data){
 struct node* newNode = malloc(sizeof(struct node));
 newNode->data = data;
 newNode->left = NULL;
 newNode->right = NULL;

 return newNode;
}


struct node* insert(struct node* head,int data){
 if(!head){
  return new_node(data);
 }else{
  if(data < head->data){
   head->left = insert(head->left,data);
  }else{
   head->right = insert(head->right,data);
  }
 }
 return head;
}

int size(struct node* head){
 if(!head){
  return 0;
 }else{
  return (size(head->left) + size(head->right) + 1);
 }
}

int maxDepth(struct node* head){
 if(!head){
  return 0;
 }else{
  if(maxDepth(head->left) > maxDepth(head->right)){
   return maxDepth(head->left) + 1;
  }else{
   return maxDepth(head->right) + 1;
  }
 }
}

int minValue(struct node* head){
 while(head->left){
  head = head->left;
 }
 return head->data;
}

int maxValue(struct node* head){
 while(head->right){
  head=head->right;
 }
 return head->data;
}

void print(struct node* head){
 if(!head){
  return;
 }else{
  print(head->left);
  printf("%d ",head->data);
  print(head->right);
 }
}

void printPostOrder(struct node* head){
 if(!head){
  return;
 }else{
  print(head->left);
  print(head->right);
  printf("%d ",head->data);
 }
}

int isBST1(struct node* head){
 printf("ITR\n");
 if(!head){
  return 1;
 }
 if(head->left && head->data < minValue(head->left)){
 printf("LEFT: %d Data:: %d\n",head->data,minValue(head->left));
  return 0;
 }
 
 if(head->right && head->data > maxValue(head->right)){
  return 0;
 }

 if(!isBST1(head->left) || !isBST1(head->right))
  return 0;

return 1;

}

int isBST2(struct node* head,int min,int max){
 if(!head){
  return 1;
 }

 if(head->data < min || head->data > max){
  return 0;
 }

 return(isBST2(head->left,min,head->data) && isBST2(head->right,head->data,max));
} 
