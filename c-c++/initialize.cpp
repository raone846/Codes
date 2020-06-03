#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,min;
		cin>>m>>n;
		int arr1[m],arr2[m],arr[n+1];
		memset(arr,-1,sizeof(arr));
		for(int i=0;i<m;++i)
			cin>>arr1[i];
		for(int i=0;i<m;++i){
			cin>>arr2[i];
			if(arr[arr1[i]]==-1)
				arr[arr1[i]]=0;
			arr[arr1[i]]=arr[arr1[i]]+arr2[i];
		}
		for(int i=1;i<n+1;++i){
			if(arr[i]!=-1){
				min=arr[i];
				break;
			}
		}
		for(int i=1;i<n+1;++i){
			if(arr[i]!=-1&&min>arr[i])
				min=arr[i];
		}
		cout<<min<<endl;
	}
	return 0;
}
