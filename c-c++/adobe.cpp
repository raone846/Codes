#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	sort(arr,arr+n);
	for(int i=1;i<n;i=i+4)
		sum+=arr[i];
	cout<<sum%1000000007<<endl;
	return 0;
}
