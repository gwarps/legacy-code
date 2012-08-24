#include "tree.h"

int hasPathSum(struct node* head,int sum){
 if(!head){
  return (sum==0);
 }else{
  sum = sum - head->data;
  return (hasPathSum(head->left,sum) || hasPathSum(head->right,sum));
 }
}

void printPath(int path[],int len){
 int i=0;
 while(i<len){
  printf("%d ",path[i++]);
 }
 printf("\n");
}

void printRecur(struct node* head,int path[],int len){
 if(!head){
  return;
 }else{
  path[len++]=head->data;

  if(!(head->left) && !(head->right)){
   printPath(path,len);
  }else{
   printRecur(head->left,path,len);
   printRecur(head->right,path,len);
  }
 }

}


void printPaths(struct node* head){

 int path[1000];
 printRecur(head,path,0);
}
