#include "link.h"

int main(){
myNode* root = NULL;
myNode* temp;

insert(&root,15);
insert(&root,13);
insert(&root,20);
insert(&root,8);
insert(&root,18);
insert(&root,11);
insert(&root,3);
insert(&root,24);
insert(&root,80);

print_tree(root);

printf("\n=====================\n");

nthInorder(root,3,&temp);
printf("\nData is: %d\n",temp->data);
return 0;
}
