#include<iostream>
using namespace std;
int maxSubArraySum(int arr[], int n){
	int max1 = INT_MIN, max2=0;
	for(int i=0;i<n;++i){
		max2 = max2+arr[i];
		if(max2<0)
			max2=0;
		else if(max1<max2)
			max1=max2;
	}
	return max1;
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
		cout<<maxSubArraySum(arr,n)<<endl;
	}
	return 0;
}
