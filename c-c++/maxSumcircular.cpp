#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
	int max1=0,max2=INT_MIN;
	for(int i=0;i<n;++i){
		max1+=arr[i];
		if(max1<0)
			max1=0;
		else if(max2<max1)
			max2=max1;
	}
	return max2;
}
int maxCircularSum(int arr[], int n){
	int max_kadane = kadane(arr,n);
	int max_wrap = 0;
	for( int i=0;i<n;++i){
		max_wrap+=arr[i];
		arr[i]=-arr[i];
	}
	max_wrap = max_wrap + kadane(arr, n);
	return (max_wrap>max_kadane)? max_wrap: max_kadane;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxCircularSum(arr,n)<<endl;
	}
	return 0;
}
