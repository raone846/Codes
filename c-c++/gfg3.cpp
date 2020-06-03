#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[],int n){
	int m=arr[0];
	for(int i=1;i<n;++i)
		if(arr[i]>m)
			m=arr[i];
	return m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr[n]={0,};
		while(m--){
			int a,b,k;
			cin>>a>>b>>k;
			for(int i=a;i<=b;++i)
				arr[i]+=k;
		}
		cout<<maxi(arr,n)<<endl;
	}
	return 0;
}
