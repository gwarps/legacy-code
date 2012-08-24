#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
};

void push(struct node** head,int data);
void print(struct node* head);

void itr_reverse(struct node** head);
void rec_reverse(struct node** head);

int loop(struct node* head);
int loop_sf(struct node* head);
