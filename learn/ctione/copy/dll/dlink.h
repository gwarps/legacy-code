#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node* next;
 struct node* prev;
};

void push(struct node** head,int data);
void print(struct node* head);
void print_tail(struct node* head);


void itr_reverse(struct node** head);
int loop(struct node* head);
