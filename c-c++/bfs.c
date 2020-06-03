#include<stdio.h>
#include<stdlib.h>

typedef struct graphtype{
	int dest;
	struct graphtype *next;
}node;

node *source[20];
int visit[20],i;

void addedge(int s,int d){
	node *temp=(node*)malloc(sizeof(node));
	temp->dest=d;
	temp->next=source[s];
	source[s]=temp;		
}

 void input_graph(int nn,int ne){
 	int s,d;
 	for(i=0;i<nn;i++)
 		source[i]=NULL;
 		visit[i]=i;
 	printf("Enter Sources & Destinations:\n");
 	for(i=0;i<ne;i++){
 		scanf("%d%d",&s,&d);
 		addedge(s,d);
	 }
}
void bfs(int nn){
	visit[0]=-1;
	for(i=0;i<nn;i++){
		node *temp=source[i];
		while(temp!=NULL){
			if(visit[temp->dest])
				visit[temp->dest]=i;
			temp=temp->next;
		}
	}
}

void path(int n){
	for(i=1;i<n;i++){
		if(visit[i]!=visit[i-1])
			printf("%d->",i);
	}
}
/*
void display(int nn){
	for(i=0;i<nn;i++){
		node *temp=source[i];
		if(source[i]!=NULL){
			printf("\n%d->",i);
			while(temp!=NULL){
				printf("%d->",temp->dest);
				temp=temp->next;
			}
			printf("\n%d->NULL",i);
		}
	}
}
*/
int main(){
	int nn,ne;
	printf("Enter Total Nodes & Edegs:\n");
	scanf("%d%d",&nn,&ne);
	input_graph(nn,ne);
//	display(nn);
	bfs(nn);
	path(nn);
	return 0;
}
