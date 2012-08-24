#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//Variables

typedef struct node{
int data;
struct node* next;
}myNode;

void add(myNode**,int);
void print_list(myNode*);
myNode* midCount(myNode*);
myNode* midFastSlow(myNode*);
