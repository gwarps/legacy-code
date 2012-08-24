#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
};

void push(struct node** head,int data);
void print(struct node* head);
void move_node(struct node** a,struct node** b);
void fb_split(struct node** head,struct node** a,struct node** b);
struct node* sorted_merge(struct node* a,struct node* b);
void merge_sort(struct node** head);
struct node* set_union(struct node* a,struct node* b);
struct node* set_intersect(struct node* a,struct node* b);

void sum_list(struct node* a,struct node* b);
