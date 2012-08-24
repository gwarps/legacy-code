#include "link.h"
// sum list driver
int main(){

 struct node* a = NULL;
 struct node* b = NULL;

 push(&a,5);
 push(&a,2);

 push(&b,8);
 push(&b,3);
 push(&b,2);
 print(a);
 print(b);
 sum_list(a,b);
return 0;
}
