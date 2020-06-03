#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,count=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
		if(arr[i]%k==0)
			count++;
	cout<<count;
	return 0;
}
