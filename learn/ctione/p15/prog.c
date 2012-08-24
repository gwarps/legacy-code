#include "link.h"

int main(){

myNode* head=NULL;
myNode* newNode = malloc(sizeof(myNode*));

newNode->data = 44;
newNode->next = NULL;


add(&head,82);
add(&head,75);
add(&head,65);
add(&head,57);
add(&head,48);
add(&head,44);
add(&head,42);
add(&head,40);

print_list(head);

SortedInsert(&head,newNode);

print_list(head);

return 0;
}
