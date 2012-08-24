#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//Function Prototypes
struct node* BuildList(int num);
int count(struct node* head);
struct node* InsertAtStart(struct node* head,int data);
void PrintElem(struct node* head);
void WrongPush(struct node* head,int data);
void Push(struct node** headRef,int data);
void AppendNode(struct node** headRef, int data);
void AppendNodeWithPush(struct node** headRef,int data);
struct node* copyList(struct node* headRef);
struct node* copyListUsingPush(struct node* headRef);
//Function to count the number of times of occurance of an element
int Count(struct node* head,int searchFor);
//Function to delete the list
void DeleteList(struct node** head);
//Delete first element from list
int Pop(struct node** head);
//Function to insert at a particular node [Custom 1]
void InsertNthOne(struct node** head,int index,int data);
//Function for sorted insert
void SortedInsertOne(struct node** head,int data);
void SortedInsert(struct node** headRef, struct node* newNode);
void InsertSortOne(struct node** head);
void Append(struct node** listOne, struct node** listTwo);
void FrontBackSplit(struct node* source,struct node** listOne,struct node** listTwo);
void ReverseList(struct node** head);
//Function for Deleting Duplicates
void RemoveDuplicates(struct node* head);
//Function to move first node from one list to another
void MoveNode(struct node** dest,struct node** source);
//Function to Alternate Split
void AlternatingSplit(struct node* source,struct node** listOne,struct node** listTwo);
//Node Structure
struct node{
int data;
struct node* next;
};
