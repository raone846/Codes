#include<stdio.h>
#include<stdlib.h>
typedef struct graph{
	int dest;
	struct graph *next;
}graphtype;


graphtype *source[20];
int nn,ne,i;


void add_edge(int s, int d){
	graphtype *temp=(graphtype*)malloc(sizeof(graphtype));
	temp->dest=d;
	temp->next=source[s];
	source[s]=temp;
}


void input_graph(int nn, int ne){
	int i,s,d;
	for(i=0;i<nn;i++)
		source[i]=NULL;
	for(i=0;i<ne;i++){
		printf("Enter source & dest\n");
		scanf("%d%d",&s,&d);
		add_edge(s-1, d-1);
	}
}



void display(){
	for(i=0;i<nn;i++){
		graphtype *temp=source[i];
		if(source[i]!=NULL){
			printf("\nNode %d is connected to",i+1);
			while(temp!=NULL){
				printf(" %d,",temp->dest+1);
				temp=temp->next;
			}
		}
		else
		printf("\nNODE %d is not connected to any node",i+1);
	}
}


int main(){
	printf("Enter NO. of nodes & edges:");
	scanf("%d%d",&nn,&ne);
	input_graph(nn, ne);
	display();
	return 0;
}
