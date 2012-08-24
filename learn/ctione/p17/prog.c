#include "link.h"

int main(){

myNode* head = NULL;


add(&head,22);
add(&head,58);
add(&head,5);
add(&head,10);
add(&head,8);
add(&head,64);
add(&head,72);
add(&head,4);

print_list(head);

print_list_back(head);
printf("\n");
return 0;

}
