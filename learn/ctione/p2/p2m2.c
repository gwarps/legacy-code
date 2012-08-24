#include "link.h"

int main(){

myNode* head=NULL;
myNode* tail=NULL;

Circular_Push(&head,&tail,5);
Circular_Push(&head,&tail,4);
Circular_Push(&head,&tail,3);
//Circular_Push(&head,&tail,2);

printf("TAIL: %d",tail->data);
printf("\nTAIL->next %d",(tail->next)->data);
Circular_print(head,tail);


printf("\n");

return 0;

}
