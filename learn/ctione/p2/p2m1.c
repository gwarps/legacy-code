#include "link.h"

int main(){

myNode* head=NULL;
myNode* delNode=NULL;


Push(&head,5);
Push(&head,4);
Push(&head,3);
Push(&head,2);
Push(&head,1);

print_list(head);

delNode=find_node(head,2);
printf("\nData to be deleted :  %d\n",delNode->data);

sdelete_bynode(&head,delNode);
sdelete_bynode(&head,find_node(head,2));

print_list(head);

return 0;
}
