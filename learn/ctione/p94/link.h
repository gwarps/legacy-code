#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{

int data;
struct node* left;
struct node* right;
}myNode;

void insert(myNode** head,int data);
void print_tree(myNode*);
void nthInorder(myNode* head,int index,myNode** temp);
