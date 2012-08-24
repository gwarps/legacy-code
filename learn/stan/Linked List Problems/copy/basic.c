#include "link.h"

int main(){

 myNode* head = NULL;
 myNode* other = NULL;
 myNode* a = NULL;
 myNode* b = NULL;
 
 myNode* alter = NULL;
 myNode* c = NULL;
 myNode* d = NULL;

 sorted_push(&alter,1);
 sorted_push(&alter,2);
 sorted_push(&alter,3);
 sorted_push(&alter,4);
 sorted_push(&alter,5);
 sorted_push(&alter,6);
 sorted_push(&alter,7);

 push(&other,21);
 push(&other,23);
 push(&other, 12);
 print(other);

 //pop(&head);
 //pop(&head);
 //pop(&head);
 //pop(&head);

 sorted_push(&head,12); 
 sorted_push(&head,31); 
 sorted_push(&head,38); 
 sorted_push(&head,19); 
 sorted_push(&head,6); 
 sorted_push(&head,44); 
 //sorted_push(&head,9); 

 print(head);
 append(&head,&other);
 
  
 //delete_all(&head);
 //pushNth(&head,2,99);
 print(head);
 print(other);
 //printf("Count::%d\n",count(head));
 printf("------------fb--count--split-----------\n"); 
 //fb_split_count(&head,&a,&b);
 fb_split_sf(&head,&a,&b);
 print(head);
 print(a);
 print(b);

 printf("----------------MOVE NODE--------------\n");
 move_node(&a,&b);
 print(a);
 print(b); 

 printf("----------------Alternating Split-----------------\n");
 print(alter);

 alter_split_mod(alter,&c,&d);

 //print(alter);
 print(c);
 print(d);

 printf("----------------Shuffle Merge--------------------\n");
 myNode* res = shuffle_merge_recursive(c,d);
 printf("%d\n",count(res));
 print(res);

 myNode* l = NULL;
 myNode* m = NULL;
 sorted_push(&l,18);
 sorted_push(&l,26);
 sorted_push(&l,12);
 sorted_push(&l,6);

 sorted_push(&m,10);
 sorted_push(&m,4);
 sorted_push(&m,17);
 sorted_push(&m,11);
 printf("---------------Sorted Merge---------------------\n");
 print(l);
 print(m);
 print(sorted_merge_recursive(l,m));

 printf("---------------Merge Sort----------------------\n");
 
 myNode* e = NULL;
 push(&e,18);
 push(&e,26); 
 push(&e,2); 
 push(&e,21); 
 push(&e,20); 
 push(&e,17); 
 push(&e,71); 
 push(&e,6);

 print(e);
 merge_sort(&e);
 print(e);
 return 0;
}
