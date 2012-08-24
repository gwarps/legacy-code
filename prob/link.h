#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{
int data;
struct node* next;
}myNode;

void add(myNode** head,int data);
void print_list(myNode*);
myNode* MidThird(myNode* head);
myNode* MidDiv(myNode* head);
