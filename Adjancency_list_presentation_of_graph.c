//Exp 13
//Shubham Pawar,20141236
//1)Implement a program to represent a given graph using adjacency list
#include <stdio.h>
#include <stdlib.h>
struct node
{
int vertex;
struct node *next;
};
struct node *creatnode(int);
struct Graph
{
int numvertices;
struct node **adjLists;
};
struct node *creatnode(int x)
{
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
 newnode->vertex=x;
 newnode->next=NULL;
 return newnode;
}
struct Graph *creatgraph(int vertices)
{
    struct Graph *graph=(struct Graph*)malloc(sizeof(struct Graph));
    graph->numvertices=vertices;
    graph->adjLists=malloc(vertices*(sizeof(struct node)));
    for(int i=0;i<vertices;i++)
    {
        graph->adjLists[i]=NULL;
    }
    return graph;
}
void addedges( struct Graph *graph,int source,int destination)
{

    struct node *newnode=creatnode(destination);
    newnode->next=graph->adjLists[source];
    graph->adjLists[source]=newnode;

    newnode=creatnode(source);
    newnode->next=graph->adjLists[destination];
    graph->adjLists[destination]=newnode;
}
void printgraph(struct Graph *graph)
{
    for(int v=0;v<graph->numvertices;v++)
    {
        struct node *temp=graph->adjLists[v];
        printf("\n vertex  %d ",v);
        while(temp)
        {
            printf("\n %d->",temp->vertex);
            temp=temp->vertex;
        }

        printf("\n");
    }
}
int main()
{
   struct Graph *graph=creatgraph(4);
   addedges(graph,0,1);
   addedges(graph,0,2);
   addedges(graph,0,3);
   addedges(graph,1,2);
   printgraph(graph);
    return 0;
}
