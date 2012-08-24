#include "graph.h"

Graph newGraph(int numVertices){
 Graph g = NULL;
 
 if(numVertices < 0){
  fprintf(stderr,"newgraph: invalid number of vertices\n");
  return NULL;
 }else{
  g = malloc(sizeof(struct graphRep));
  if(g==NULL){
   fprintf(stderr,"newgraph: out of memory");
   exit(1);
  }

  g->edges = malloc(numVertices*sizeof(int *));
 
  int v;

  for(v=0;v<numVertices;v++){
   g->edges[v] = NULL;
  } 
  g->nV = numVertices;
  g->nE = 0;
 }
 return g;
}

void showGraph(Graph g){
 if(g==NULL){
  printf("NULL GRAPH\n");
 }else{
  printf("V=%d. E=%d\n",g->nV,g->nE);
  
  int i;
  for(i=0;i < g->nV;i++){
   int nshown = 0;
   list listV = g->edges[i];
   while(listV){
    printf("%d-%d ",i,listV->name);
    nshown++;
    listV = listV->next;
   }

   if(nshown > 0){
    printf("\n");
   }
  }
 }
}

static int validV(Graph g,Vertex v){
 return (v >=0 && v < g->nV);
}

Edge newE(Vertex v,Vertex w){
 Edge e = {v,w};
 return e;
}

void showE(Edge e){
 printf("%d-%d",e.v,e.w);
 return;
}

void insertE(Graph g, Edge e){
 if(g==NULL){
  fprintf(stderr,"not initialized");
 }else{
  if(!validV(g,e.v) || !validV(g,e.w)){
   fprintf(stderr,"invalid vertices\n");
  }else{
   if(isEdge(g,e)==0){
    

   }
  }
 }

}
