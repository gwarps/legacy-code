#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{

int data;
struct node* next;
}myNode;

void add(myNode**,int);
void print_list(myNode*);
void SortedInsert(myNode** head,myNode* newNode);
