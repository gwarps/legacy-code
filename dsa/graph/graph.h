#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

struct vertex{
 int node;
 int visited;
 struct edge *edges;
 struct vertex *next;
};

struct edge{
 int wt;
 struct vertex *connect;
 struct edge *next;
};

void GraphAddVertex(struct vertex** head,int node);
void GraphAddEdge(struct vertex* head,int from,int to,int wt);
int vertexExist(struct vertex* head,int node);
struct vertex* newVertex(int node); 
void printVertex(struct vertex* head);
void printEdge(struct vertex* head);
struct vertex* get_vertex(struct vertex* head,int node);

