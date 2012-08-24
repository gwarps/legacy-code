// @author: Puneet Singh
// @name: adjaceny list representation of graph
//
#include<stdio.h>
#include<stdlib.h>

#define UNVISITED -1

typedef int Vertex;	//define a vertex
typedef struct node *list;


typedef struct{		//define a edge
 Vertex v;
 Vertex w;
}Edge;

struct node{		//define a node
 Vertex name;
 list next;
};

struct graphRep{
 int nV;		//#vertices
 int nE;		//#edges
 list *edges;		//array of linked lists .. THIS IS ADJANCECY LIST
};

typedef struct graphRep *Graph;

//FUNCTIONS
Graph newGraph(int numVertices);
void printGraph(Graph g);
static int validV(Graph g,Vertex v);
Edge newE(Vertex v, Vertex w);
void showE(Edge e);	//print an edge
void insertE(Graph g,Edge e);
