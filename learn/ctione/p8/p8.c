#include "link.h"

int main(){

myNode* head = NULL;
myNode* middle = NULL;

add(&head,10);
add(&head,2);
add(&head,7);
//add(&head,91);
add(&head,19);
add(&head,32);
add(&head,28);
add(&head,51);
//middle = midCount(head);
middle = midFastSlow(head);
print_list(head);
printf("\nMiddle of list if %d\n",middle->data);

return 0;

}
