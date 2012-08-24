#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* left;
struct node* right;
};

struct node* new_node(int data);
struct node* insert(struct node* head,int data);
int size(struct node* head);
int maxDepth(struct node* head);
int minValue(struct node* head);
int maxValue(struct node* head);

void print(struct node* head);
void printPostOrder(struct node* head);
int hasPathSum(struct node* head,int sum);

void printPaths(struct node* head);
void printPath(int path[],int len);
void printRecur(struct node* head,int path[],int len);

//Not Full Proof
int isBST1(struct node* head);
int isBST2(struct node* head,int min,int max);
