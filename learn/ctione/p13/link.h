#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{

int data;
struct node* next;
}myNode;

void add(myNode**,int);
void print_list(myNode*);
int compare_linkd(myNode* list1,myNode* list2);
myNode* find_from_end(myNode* head,int n);
