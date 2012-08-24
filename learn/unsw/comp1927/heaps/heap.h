#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int Item;

struct heap{
 int nItems;//count of items
 Item *items;//heap(array) of items
 int size;//size of array
};

struct heap* init_heap(int size);
//This function is written for min heap. means min element at top
//for opposite just change the sign for comparison
void fixup(Item *heap,int index);
void print_heap(Item *item,int size);
int delMinHeap(struct heap* h);
void fixDown(Item *heap,int parent,int size);
