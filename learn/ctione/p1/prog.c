#include "link.h"

int main(){

myNode* head = NULL;
myNode* tail = NULL;

add(3,&head,&tail);
add(5,&head,&tail);
add(10,&head,&tail);
add(7,&head,&tail);
add(14,&head,&tail);

print_list(head);
printf("\nHead: %d Tail: %d\n",head->data,tail->data);

reverse(&head,&tail);

print_list(head);
printf("\nHead: %d Tail: %d\n",head->data,tail->data);

return 0;
}
