#include "graph.h"

//To check if a vertex exist 
int vertexExist(struct vertex* head,int node){
 while(head){
  if(head->node==node){
   return 1;
  }else{
   head = head->next;
  }
 }
 return 0;
}
// Code for new Vertex Initialize
struct vertex* newVertex(int node){
 struct vertex* newNode = malloc(sizeof(struct vertex));
 newNode->node = node;
 newNode->visited = 0;
 newNode->edges = NULL;
 newNode->next = NULL;

 return newNode;
}
//Add Vertex
void GraphAddVertex(struct vertex** head,int node){
 struct vertex* current = *head;
 assert(!vertexExist(current,node));

 struct vertex* newNode = newVertex(node);
 newNode->next = *head;

 *head = newNode;
}
//Add Edge
void GraphAddEdge(struct vertex** start,int from,int to,int wt){
 struct vertex* head = *start;

 struct vertex* from_node = get_vertex(head,from);
 struct vertex* to_node = get_vertex(head,to);
 struct edge* edge_head = to_node->edges; 

 struct edge* newEdge = malloc(sizeof(struct edge));
 newEdge->wt = wt;
 newEdge->connect = to_node;
 newEdge->next = NULL;

 if(!edge_head){
  to_node->edges = newEdge;
 }else{
  while(edge_head->next){
   edge_head = edge_head->next;
  }
  edge_head->next = newEdge;
 }
   
}

//Print all the vertex
void printVertex(struct vertex* head){
 while(head){
  printf("%d ",head->node);
  head = head->next;
 }
 printf("\n");
}

//Print all the edges
void printEdge(struct vertex* head){
 struct edge* vedge = head->edges;
 while(vedge){
  printf("%d -> %d\n",head->node,vedge->connect->node);
  vedge = vedge->next;
 }
 printf("\n");
}

//get pointer to vertex specified by node number and vertex list
struct vertex* get_vertex(struct vertex* head,int node_no){
 while(head){
  if(head->node==node_no){
   return head;
  }
  head = head->next;
 } 
 return NULL;
}
