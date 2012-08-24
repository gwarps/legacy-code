#include "link.h"

int main(){

myNode* list1=NULL;
myNode* list2=NULL;

static int lock;

add(&list1,10);
add(&list1,2);
add(&list1,7);

add(&list2,10);
add(&list2,2);
add(&list2,7);
add(&list2,12);

lock = compare_linkd(list1,list2);

printf("\nFLAG : %d\n",lock);

return 0;
}
