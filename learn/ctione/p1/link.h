#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{
int data;
struct node* next;
struct node* prev;
}myNode;


void add(int data,myNode** head,myNode** tail);
void print_list(myNode* head);
void reverse(myNode** head,myNode** tail);
