#include "link.h"

int main(){

myNode* head=NULL;


Push(&head,10);
Push(&head,21);
Push(&head,84);

Append(&head,47);
Append(&head,22);
print_list(head);

return 0;

}
