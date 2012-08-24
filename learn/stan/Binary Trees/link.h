#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{
int data;
struct node* left;
struct node* right;
}myNode;


void insert(myNode** root,int data);
void print_tree(myNode* node);
void print_postorder(myNode* node);
int size(myNode* root);
int maxDepth(myNode* root);
int minValue(myNode* root);
int maxValue(myNode* root);
int hasPathSum(myNode* root,int data);

//Print each possible path from root to leaf
void printPath(myNode* root);
void printRecursive(myNode* root,int path[],int pathNum);
void printArray(int path[],int len);

//Same tree check
int same_tree(myNode*,myNode*);

//count Trees
int countTrees(int numKeys);
//BST Version 1
int isBST1(myNode* root);
//BST Version 2
int isBST2(myNode* root);
int bst_util(myNode*,int,int);

//tree to list
myNode* treeToList(myNode* root);
static void join(myNode* a,myNode* b);
static myNode* append(myNode* a,myNode* b);
void print_list(myNode*);
