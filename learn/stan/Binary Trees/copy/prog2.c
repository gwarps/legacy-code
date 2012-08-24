#include "tree.h"
int main(){

 struct node* head = NULL;
 head = insert(head,12);
 head = insert(head,10);
 head = insert(head,15);
 head = insert(head,24);
 head = insert(head,8);
 head = insert(head,5);

 printf("Has Path Sum: %d\n",hasPathSum(head,35));
 printPaths(head); 
 return 0;
}
