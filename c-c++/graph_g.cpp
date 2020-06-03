#include <bits/stdc++.h> 
using namespace std; 
#define INF 99999  

void shortestdist(int dist[][100],int V)  
{  
    for (int i = 0; i < V; i++)  {  
        for (int j = 0; j < V; j++)  {  
            if (dist[i][j] == INF)  
                cout<<"INF"<<"   ";  
            else
                cout<<dist[i][j]<<"   ";  
        }  
        cout<<endl;  
    }  
}     
void floydWarshall(int graph[][100],int V)
{  
   
    int dist[100][100], i, j, k;  
  
     for (i = 0; i < V; i++)  
        for (j = 0; j < V; j++)  
            dist[i][j] = graph[i][j];  
  
    for (k = 0; k < V; k++)  {  
        for (i = 0; i < V; i++)  {  
            for (j = 0; j < V; j++)  {  
                if (dist[i][k] + dist[k][j] < dist[i][j])  
                    dist[i][j] = dist[i][k] + dist[k][j];  
            }  
        }  
    }  
    shortestdist(dist,V);  
}  
  
  int main()  
{ 
	int i,j,V;
    cin>>V;
    int graph[100][100];
    
    for(i=0;i<V;i++){
    	for(j=0;j<V;j++){
    		cin>>graph[i][j];
		}
	}
    
    floydWarshall(graph,V);  
    return 0;  
}
