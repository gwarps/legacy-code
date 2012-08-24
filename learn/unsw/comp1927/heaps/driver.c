#include "heap.h"

int main(){
struct heap* h = init_heap(20);
insert(h,4); 
insert(h,4);
insert(h,8);
insert(h,9);
insert(h,4);
insert(h,12);
insert(h,9);
insert(h,11);
insert(h,13);
insert(h,7);
insert(h,10);
insert(h,5);

print_heap(h->items,h->nItems);
printf("Size: %d\n",h->size);
printf("Elems: %d\n",h->nItems);

printf("Minimum Del: %d\n",delMinHeap(h));
printf("Minimum Del: %d\n",delMinHeap(h));
printf("Minimum Del: %d\n",delMinHeap(h));
printf("Minimum Del: %d\n",delMinHeap(h));
printf("Minimum Del: %d\n",delMinHeap(h));
printf("Minimum Del: %d\n",delMinHeap(h));
printf("Minimum Del: %d\n",delMinHeap(h));

print_heap(h->items,h->nItems);
printf("Size: %d\n",h->size);
printf("Elems: %d\n",h->nItems);
return 0;
}
