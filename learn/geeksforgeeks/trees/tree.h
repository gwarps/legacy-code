#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{
int data;
struct node* left;
struct node* right;
}myNode;

void insert(myNode** root,int data);
int isSame(myNode* a,myNode* b);
myNode* search(myNode* head,int data);
int isSub(myNode* head,myNode* node);

//Geek Functions
void printRange(myNode* root,int min,int max);
int printAncestors(myNode*,int);
int getLevel(myNode* node,int x,int);
int inorder_sus(myNode* node,myNode* n);
