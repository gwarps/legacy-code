#include "link.h"

int main(){

myNode* head = NULL;
myNode* third = NULL;
myNode* temp = NULL;

add(&head,7);
add(&head,12);
add(&head,91);
add(&head,9);
add(&head,45);
add(&head,29);
add(&head,61);
add(&head,47);
//add(&head,71);
//add(&head,29);

print_list(head);
third = MidThird(head);
temp = MidDiv(head);

printf("One Third: %d\n",third->data);
printf("\nNext: %d\n",temp->data);
return 0;
}
