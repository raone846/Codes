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

void dfs(int k){
	if(k->next==NULL||!visited[k])
		return k;
	visited[k]=1;
	printf("node processed id %d",k);
	dfs(k+1);
}

int main(){
	int j;
	graphtype *p=source[i];
	printf("Enter NO. of nodes & edges:");
	scanf("%d%d",&nn,&ne);
	input_graph(nn, ne);
	while(p==NULL){
		j=p->next;
		if(!visited[j])
		dfs(j);
	p=p->next;
	}
	dfs(0);
	return 0;
}
