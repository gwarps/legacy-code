#include "link.h"

//Insert operation on tree
void insert(myNode** root,int data){

myNode* item = (myNode*)malloc(sizeof(myNode*));
item->data = data;
item->left = NULL;
item->right = NULL;

if(*root == NULL){
*root = item;
return;
}else{
if(item->data < (*root)->data){
insert(&((*root)->left),data);
}else if(item->data > (*root)->data){
insert(&((*root)->right),data);
}

}
}

//Print InOrder traversal
void print_tree(myNode* node){

if(node==NULL){
return;
}

print_tree(node->left);
printf("%d ",node->data);
print_tree(node->right);

}

void print_postorder(myNode* node){
if(node==NULL){
return;
}

print_postorder(node->left);
print_postorder(node->right);
printf("%d ",node->data);
}

//Count Number of Nodes
int size(myNode* root){
if(root==NULL){
return 0;
}

return (size(root->left) + size(root->right) + 1);

}

//Give max depth

int maxDepth(myNode* node){
if(node==NULL){
return 0;
}else{

int lDepth = maxDepth(node->left);
int rDepth = maxDepth(node->right);

//use tha larger one
if(lDepth > rDepth){
return (lDepth+1);
}else{
return (rDepth+1);
}
}
}

//Return mimimum value

int minValue(myNode* node){
myNode* current = node;

while(current->left!=NULL){
current = current->left;
}

return (current->data);
}
//return max value

int maxValue(myNode* node){
myNode* current = node;

while(current->right!=NULL){
current = current->right;
}

return (current->data);
}

//Has Path sum

int hasPathSum(myNode* root,int sum){

if(root==NULL)
return (sum==0);
else{

int subSum = sum - root->data;

return(hasPathSum(root->left,subSum) || hasPathSum(root->right,subSum));
}
}
//Wrapper function for printing paths
void printPath(myNode* root){
int path[1000];

printRecursive(root,path,0);

}

//Print exact paths
void printRecursive(myNode* root,int path[],int pathNum){

if(root==NULL)
return;

//append
path[pathNum] = root->data;
pathNum++;

if(root->left == NULL && root->right==NULL){
printArray(path,pathNum);
}else{
printRecursive(root->left,path,pathNum);
printRecursive(root->right,path,pathNum);
}
}
//Actual print array function
void printArray(int path[],int len){
int i;
for(i=0;i<len;i++){
printf("%d ",path[i]);
}
printf("\n");
}

//Same tree
int same_tree(myNode* a,myNode* b){
if(a==NULL && b==NULL){
return 1;
}else if(a!=NULL && b!=NULL){
return (a->data == b->data && same_tree(a->left,b->left) && same_tree(a->right,b->right));
}else{
return 0;
}
}

//Function to count no. of possible BST for n nodes

int countTrees(int numKeys){

if(numKeys<=1){
return 1;
}else{

int sum = 0;
int left,right,root;

for(root=1;root<=numKeys;root++){
left = countTrees(root-1);
right = countTrees(numKeys-root);

sum+= left*right;
}
return sum;
}
}

//BST Version 1

int isBST1(myNode* root){

if(root==NULL)
return 1;

if(root->left!=NULL && minValue(root->left) > root->data)
return 0;

if(root->right!=NULL && maxValue(root->right) < root->data)
return 0;

return 1;

}

//BST Version 2
int isBST2(myNode* root){

int max = maxValue(root);
int min = minValue(root);

return (bst_util(root,min,max));
}

int bst_util(myNode* root,int min,int max){

if(root==NULL)
return 1;

if(root->data < min || root->data > max)
return 0;

return  (bst_util(root->left,min,root->data) && bst_util(root->right,root->data + 1,max));
}

//Tree to circular linked list

//Recursion
myNode* treeToList(myNode* root){
myNode* aList;
myNode* bList;

if(root == NULL)
return NULL;
aList = treeToList(root->left);
bList = treeToList(root->right);

root->left=root;
root->right=root;

//Append everything together in sorted order
aList = append(aList,root);
aList = append(aList,bList);

return (aList);
}
//Two nodes list joining
static void join(myNode* a,myNode* b){
a->right = b;
b->left = a;

}
//merge two circular lists
static myNode* append(myNode* a,myNode* b){

myNode* aLast;
myNode* bLast;

if(a==NULL)
return b;
if(b==NULL)
return a;

aLast = a->left;
bLast = b->left;

join(aLast,b);
join(bLast,a);

return a;
}
//Print list
void print_list(myNode* head){

myNode* current = head;

printf("Can u print\n");
while(current!=NULL){
printf("%d ",current->data);
current = current->right;
if(current == head)
break;
}
printf("\n");
}
