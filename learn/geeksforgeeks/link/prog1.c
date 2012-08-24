#include "link.h"
// General Driver
int main(){
 struct node* a = NULL;
 struct node* b = NULL;
 struct node* c = NULL;
 struct node* d = NULL;

 push(&a,19);
 push(&a,15);
 push(&a,28);
 push(&a,10);
 push(&a,1);

 push(&b,1);
 push(&b,14);
 push(&b,9);
 push(&b,20);
 push(&b,10);
 push(&b,28);
 push(&b,19);
 print(a);
 print(b);
 printf("-------------------------------\n");
 //move_node(&b,&a);
 //fb_split(&a,&c,&d);
 //print(sorted_merge(a,b));
 //print(set_union(a,b));
 print(set_intersect(a,b));
 //print(d);
return 0;
}
