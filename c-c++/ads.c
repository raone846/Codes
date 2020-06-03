/*NAME:Rohan Pandey
SECTION:C
ROLLNO.:56*/

#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
typedef struct graphtype
 {
   int dest;
   struct graphtype *next;
 }graph;

graph *source[20];
int parent[20];

void addedge(int s,int d)
 {
   graph *temp=(graph*)malloc(sizeof(graph));
   temp->dest=d;
   temp->next=source[s];
   source[s]=temp;
 }

void input_graph(int nn, int ne){
	int s, d;
	 for(i=0;i<nn;i++)
       {
 	 source[i]=NULL;
	 parent[i]=i;
       }
     //input graph    
    printf("Enter Source And Destination\n");
    for( i=0;i<ne;i++)
       {
         int s,d;
         scanf("%d%d",&s,&d);
         addedge(s,d);
       }	
}

void display(int nn)
 {
 	int i;
  for( i=0;i<nn;i++)
   {
    graph *temp=source[i];
    if(source[i]!=NULL)
      {
       printf("\n%d->",i);
        while(temp!=NULL)
         {
           printf(" %d-> ",temp->dest);
           temp=temp->next;
         }
        printf("NULL");
      }
    else
      printf("\n%d->NULL ",i);
   }
 }
 
void bfs(int pos)
 {
 	int i,val;
 	//initializing parent of 0 as -1 in order to avoid the conflict
  parent[0]=-1;
  queue <int> q;
	//pushing the very first node(source) into the queue so
	//that while loop can run atleast once 
	q.push(pos);
  while(!q.empty())
   {
   	//val will have the value of souce node it need to process
   	val=q.front();
   	//temp will have the address of linked list(which contains all
		// the destinationination nodes source is connected to)
    graph *temp=source[val];
    q.pop();
    //pushing all the nodes connected to current source(val variable)
		// into the queue if it was never been visited and changing
		// parent[destination] to source
    //checking if parent is same as node then changing its parent from where it originated
    while(temp!=NULL)
         {
           if(parent[temp->dest]==temp->dest)
           {
           		parent[temp->dest]=val;
           		q.push(temp->dest);
		   }	
 	  	 temp=temp->next;
         }
   }
 }

void path()
 {
   int d;
   printf("\nEnter Destination\n");
   scanf("%d",&d);
   //backtracking and printing minimum path
   while(d!=-1)
    {
	printf("%d<- ",d);
        d=parent[d];
    }
  }
int main()
 {
 	int i,nn,ne;
   printf("Enter No. Of Nodes And Edges\n"); 
   scanf("%d%d",&nn,&ne);
   //calling input_graph for building the graph
   input_graph(nn,ne);
    //displaying the graph   
    display(nn);
    //applying bfs
    bfs(0);
    
    //printing the parent array after applying bfs
    printf("\nParent Array\n");
    for( i=0;i<nn;i++)
       printf("%d,",parent[i]);
    
	//printing the minimum path   
    printf("\n\nPATH");
    path();     
 }

