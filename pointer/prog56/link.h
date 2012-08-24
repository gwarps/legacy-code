#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//Structure of node
typedef struct node{
int data;
struct node* next;
}myNode;

//Function
//PUSH OPS
void Push(myNode**,int);
//POP OPS
void Pop(myNode**);

//Display the list content

void print_stack(myNode* head);
