#include<bits/stdc++.h>
using namespace std;
int wellpr(vector<int> arr,int t,int n){
	vector<int> prefix(t+1);
	for(int i=0;i<t;++i){
		if(arr[i]<n)
			arr[i]=-1;
		else
			arr[i]=1;
	}
	prefix[0]=0;
	for(int i=1;i<t+1;++i)
		prefix[i]=prefix[i-1]+arr[i-1];
	int max_length=0;
	for(int j=0;j<t+1;++j){
		for(int i=0;i<j;++i){
			if(prefix[j]-prefix[i]>0)
				if(max_length<j-i)
					max_length=j-i;
					break;
		}
	}
	return max_length;
}
int main(){
	vector<int> arr;
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		arr.push_back(n);
	}
	cin>>n;
	cout<<wellpr(arr,t,n);
	return 0;
}
