#include "link.h"

int main(){
 struct node* a = NULL;
 push(&a,2);
 push(&a,12);
 push(&a,11);
 push(&a,8);
 push(&a,5);

 print(a);
 itr_reverse(&a);
 print(a);
 rec_reverse(&a);
 print(a);
return 0;
}
