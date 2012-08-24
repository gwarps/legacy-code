#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{
int data;
struct node* next;
struct node* prev;
}myNode;

//Push at start for Doubly linked list
void Push(myNode** head,int data);

//Append at end
void Append(myNode**,int);

//Function to print the whole list
void print_list(myNode*);
