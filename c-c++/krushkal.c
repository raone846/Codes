#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int src,dest,weight;
	struct node *next;  
}node;
node *head=NULL;
int parent[20],i;

int find(int x){
	if(parent[x]==x) return x;
	return (find(parent[x]));
}

void find_union(){
	node *temp=head;
	while(temp!=NULL){
		if(find(temp->src)!=find(temp->dest))
			parent[temp->dest]=temp->src;
		temp=temp->next;
	}
}

void insert(int s,int d, int wt){
	node *prev;
	node* temp=(node*)malloc(sizeof(node));
	temp->src=s;
	temp->dest=d;
	temp->weight=wt;
	if(head==NULL || head->weight>wt){
		temp->next=head;
		head=temp;
		return;
	}
	prev=head;
	while(prev->next!=NULL&&prev->next->weight<=wt){
		prev=prev->next;
	}
	temp->next=prev->next;
	prev->next=temp;
}

void input_graph(int nn, int ne){
	int s,d,wt;
	for(i=0;i<nn;i++)
		parent[i]=i;
	printf("Enter Sources, Destinations and Weights: \n");
	for(i=0;i<ne;++i){
		scanf("%d%d%d",&s,&d,&wt);
		insert(s,d,wt);
	}
}

void display(){
	node *temp=head;
	int tree_weight=0;
	while(temp!=NULL){ 
		if(parent[temp->dest]==temp->src){
			printf("%d=>%d\n",temp->src,temp->dest);
			tree_weight+=temp->weight;
		}
		temp=temp->next;
	}
	printf("\n");
	printf("weight of tree = %d\n",tree_weight);
}

int main(){
	int nn,ne;
	printf("Enter the no. of Nodes & Edges: \n");
	scanf("%d%d",&nn,&ne);
	input_graph(nn,ne);
	find_union();
	display();
	return 0;
}
