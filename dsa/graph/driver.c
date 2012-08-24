#include "graph.h"

int main(){

 struct vertex* head = NULL;

 GraphAddVertex(&head,6);
 GraphAddVertex(&head,5);
 GraphAddVertex(&head,4);
 GraphAddVertex(&head,3);
 GraphAddVertex(&head,2);
 GraphAddVertex(&head,1);
 printVertex(head);

 GraphAddEdge(head,1,2,1);
 struct edge* ed = head->edges;

 printf("%d\n",ed==NULL); 
 printEdge(head);
return 0;
}
