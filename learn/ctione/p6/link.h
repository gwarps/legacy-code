#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//Variables

typedef struct node{
int data;
struct node* next;
}myNode;




//Function Prototypes
//Function to add elements at end of linked list using Global variables
void add(int value);
//Function to add elements at end without using Global Variables
void addwg(myNode** head,myNode** tail,int value);
//Function for iterative reverse
void iterative_reverse();
//Function for recursive reverse
myNode* recursive_reverse(myNode *root);
//Function for recursive reverse [without Using Global Variables]
myNode* recursive_reversewg(myNode* current,myNode* next);

void print_list();
void print_listwg(myNode* head);
//Globals(not required, though)

myNode *head,*tail,*temp;

//Similar functions and Structures for Double linked list

typedef struct dnode{
int data;
struct dnode* next;
struct dnode* prev;
}dNod;

dNod *dhead,*dtail;
void add_dnode(int value);
void print_dlist();
void dreverse();

