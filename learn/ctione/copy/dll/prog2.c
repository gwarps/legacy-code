#include "dlink.h"


int main(){

 struct node* a = NULL;

 push(&a,23);
 push(&a,10);
 push(&a,2);
 push(&a,17);

 print(a);
 itr_reverse(&a);
 print(a);
 return 0;
}
