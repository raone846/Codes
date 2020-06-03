#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,x1,y1,x2,y2,sum;
		cin>>n>>m;
		int arr[n][m];
		for(int i=0;i<n;++i)
			for(int j=0;j<m;++j)
				cin>>arr[i][j];
		cin>>x1>>y1>>x2>>y2;
		for(int i=x1-1;i<x2;++i){
			for(int j=y1-1;j<y2;++j){
				sum+=arr[i][j];
			}
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}
