#include "link.h"

int main(){

myNode* head = NULL;

myNode* res = NULL;

add(&head,22);
add(&head,58);
add(&head,5);
add(&head,10);
add(&head,8);
add(&head,64);
add(&head,72);
add(&head,4);

print_list(head);
res = find_from_end(head, 6);
printf("\nDATA: %d\n",res->data);

return 0;
}
