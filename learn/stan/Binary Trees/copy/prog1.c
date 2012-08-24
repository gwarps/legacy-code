#include "tree.h"

int main(){
 
 struct node* head=NULL;
 head = insert(head,12);
 head = insert(head,10);
 head = insert(head,15);
 head = insert(head,24);
 head = insert(head,8);
 head = insert(head,5);

 //head->data=9;
 printf("SIZE: %d\n",size(head));
 printf("Max Depth. Total No. of nodes along longest path: %d\n",maxDepth(head));
 
 printf("Min Value: %d\n",minValue(head));
 printf("Max Value: %d\n",maxValue(head));
 printf("BST1:%d\n",isBST1(head));
 printf("BST2:%d\n",isBST2(head,minValue(head),maxValue(head)));
 print(head);
 printf("\n");
 printPostOrder(head);
 printf("\n");
return 0;
}
