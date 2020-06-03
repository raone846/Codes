#include<stdio.h>
int source[10][10], visited[10],n;
void dfs(int i){
	int j;
	printf("\n%d",i);
	visited[i]=1;
	for(j=0;j<n;j++){
		if(!visited[j]&&source[i][j]==1)
			dfs(j);
	}
}

void main(){
	int i,j;
	printf("Enter number of vertices:");
	scanf("%d",&n);
	printf("\nEnter adjacency matrix of the graph:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&source[i][j]);
		}
	}
	for(i=0;i<n;i++){
		visited[i]=0;
	}
	dfs(0);
}
