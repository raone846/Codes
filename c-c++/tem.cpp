#include<bits/stdc++.h>
using namespace std;
int maxMoney(int arr[], int num){
	int sum[num],max=0;
	sum[0]=arr[0];
	for(int i=1;i<num;++i)
		sum[i]=sum[i-1]+arr[i];
	for(int i=0;i<num;++i)
		cout<<sum[i]<<" ";
	cout<<"\n";
	return max;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int arr[num];
		for(int i=0;i<num;++i)
			cin>>arr[i];
			
		cout<<maxMoney(arr, num)<<endl;
	}
	return 0;
}
