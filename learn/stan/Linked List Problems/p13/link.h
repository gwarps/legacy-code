#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//Node structure
typedef struct node{
int data;
struct node* next;
}myNode;

void add(myNode** head,int data);
void print_list(myNode* head);
myNode* ShuffleOne(myNode* a,myNode* b);
myNode* Recursive_Shuffle(myNode* a,myNode* b);
