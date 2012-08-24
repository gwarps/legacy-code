#include "heap.h"

struct heap* init_heap(int size){
 struct heap* my_heap = malloc(sizeof(struct heap));
 assert(my_heap!=NULL);
 my_heap->items = malloc((size+1)*sizeof(Item));
 assert(my_heap->items != NULL);

 my_heap->nItems = 0;
 my_heap->size = size;

 return my_heap;
}

void insert(struct heap* hp,Item num){
 assert(hp != NULL && hp->nItems < hp->size);
 hp->nItems++;
 hp->items[hp->nItems] = num;

 fixup(hp->items,hp->nItems);
}
//function for min heap, means min element at the top
void fixup(Item *heap,int index){
 while(index > 1 && heap[index] < heap[index/2]){
  Item swap = heap[index];
  heap[index] = heap[index/2];
  heap[index/2] = swap;
  
  index = index/2;
 }
}

void print_heap(Item *item,int size){
 printf("Heap Contents..\n");
 int i = 1;
 while(i <= size){
  printf("%d ",item[i++]);
 }
 printf("\n");
}

int delMinHeap(struct heap* hp){

 Item *heap = hp->items;
 int len = hp->nItems;

 hp->nItems = hp->nItems-1;

 Item retval = heap[1];
 heap[1] = heap[len];
 fixDown(heap,1,hp->nItems);
 return retval;
}

//function for min heap, for max reverse sign comparison except one for index

void fixDown(Item *heap,int parent,int size){
 int finish = 0;
 
 while(2*parent <= size && !finish){
  int child = 2*parent;
  if(child < size && heap[child] > heap[child + 1]){
   child++;
  }
  
  if(heap[parent] > heap[child]){
   Item swap = heap[child];
   heap[child] = heap[parent];
   heap[parent] = swap;

   parent = child;
  }else{
   finish = 1;
  }
 } 
 return;
}
