#include "link.h"


int main(){

myNode *head,*tail;

head=(myNode*)0;

addwg(&head,&tail,1);
addwg(&head,&tail,2);
addwg(&head,&tail,3);

print_listwg(head);

head=recursive_reversewg(head,(myNode*)0);

print_listwg(head);

return 0;
}
