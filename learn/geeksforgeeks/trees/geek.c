#include "tree.h"

int printAncestors(myNode* root,int target){
//printf("call");
if(root == NULL)
return 0;

if(root->data == target)
return 1;

if(printAncestors(root->left,target)||printAncestors(root->right,target)){

printf("%d ",root->data);

return 1;
}
return 0;

}

int getLevel(myNode* node,int x,int level){

if(node == NULL)
return 0;

if(node->data == x)
return level;

return (getLevel(node->left,x,level+1)|getLevel(node->right,x,level+1));

}

//Inorder successor

int inorder_sus(myNode* node,myNode* n){

int sus = 0;
if(n->right)
return (n->right->data);

while(node){
if(n->data < node->data){
sus = node->data;
node = node->left;
}else if(n->data > node->data){
node = node->right;
}else
break;
}
return sus;
}
