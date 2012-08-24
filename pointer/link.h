#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//Structure of node
typedef struct node{
int data;
struct node* next;
}myNode;

//Functions
//Sorted Add
void add(myNode** head, int data);

//Display the list content

void print_list(myNode* head);
