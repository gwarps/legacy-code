#include "link.h"

int main(){
 struct node* head = malloc(sizeof(struct node));
 head->data=12;
 head->next = malloc(sizeof(struct node));
 head->next->data = 23;
 head->next->next = malloc(sizeof(struct node));
 head->next->next->data = 10;
 head->next->next->next = NULL;

 //head->next->next->next = head->next;
 //head->next=head;
 
 //print(head);
 printf("LOOPED:: %d\n",loop(head));
 printf("LOOPED SF:: %d\n",loop_sf(head));

return 0;
}
