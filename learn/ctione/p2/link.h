#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//Variables

//Single Linked List[Can be use for single circular list]
typedef struct node{
int data;
struct node *next;
}myNode;


//Function Prototypes

void Push(myNode** head, int data);

//Function to print list
void print_list(myNode* head);

//Node finder from index
myNode* find_node(myNode* head,int index);

//Function to delete by node
void sdelete_bynode(myNode** head,myNode* delNode);

//Circular linked list functions
void Circular_Push(myNode** head,myNode** tail,int data);
void Circular_print(myNode* head,myNode* tail);
