#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void BubbleSort(int seq[],int num);
void print_array(int seq[],int num);
void swap(int*,int*);
void SmartBubbleSort(int seq[],int num);


//Linked list functions

typedef struct node{
int data;
struct node* next;
}myNode;

void add(myNode** head,int data);
void print_list(myNode* head);
int count(myNode* head);
//BubbleSort

void BubbleSortL(myNode**,int);
