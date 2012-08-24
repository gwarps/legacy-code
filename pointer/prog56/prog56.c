#include "link.h"

int main(){

myNode* head=NULL;

Push(&head,10);
Push(&head,5);
Push(&head,12);
Push(&head,9);
Push(&head,23);
Push(&head,12);

print_stack(head);

Pop(&head);

print_stack(head);

Pop(&head);

print_stack(head);

return 0;
}
