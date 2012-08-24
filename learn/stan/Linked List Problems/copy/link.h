#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{
 int data;
 struct node* next;
}myNode;

void push(myNode** head,int data);
void print(myNode* head);
int count(myNode* head);
int findNth(myNode* head,int data);
void delete_all(myNode** head);
void pushNth(myNode** head,int index,int data);
void sorted_push(myNode** head,int data);
void append(myNode** a,myNode** b);
void move_node(myNode** dest,myNode** source);
void fb_split_count(myNode** head, myNode** a,myNode** b);
void fb_split_sf(myNode** head,myNode** a,myNode** b);
void alter_split(myNode* head,myNode** a,myNode** b);
void alter_split_mod(myNode* head,myNode** a,myNode** b);
myNode* shuffle_merge_local(myNode* a,myNode* b);
myNode* shuffle_merge_recursive(myNode* a,myNode* b);
myNode* sorted_merge(myNode* a,myNode* b);
myNode* sorted_merge_recursive(myNode* a,myNode* b);
void merge_sort(myNode** head);
