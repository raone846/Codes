#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0,i,j;
		cin>>n;
		int arr[n];
		for(i=0;i<n;++i)
			cin>>arr[i];
		for(i=0;i<n;++i){
			for(j=i+1;j<n;++j){
				if(arr[i]==arr[j]){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
