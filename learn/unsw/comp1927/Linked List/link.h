#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//Function Prototype

void Push(struct node** head,int data);

//Node Structure
typedef struct node* link;
struct node{
int data;
link next;
};

//Double link list Structure

typedef struct dnode ListNode;
struct dnode{
int data;
ListNode* next;
ListNode* prev;
}
//For EndNode of double link list
typedef struct EndNode LinkedList;
struct EndNode{
ListNode* first;
ListNode* last;
}

