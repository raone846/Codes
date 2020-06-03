#include<iostream>
using namespace std;
int dp[100]={0};
int maxSum(int pi[],int bi[],int n,int i){
	if(i>n-1) return 0;
	if(dp[i]!=0) return dp[i];
	return dp[i]=max(pi[i]+maxSum(pi,bi,n,i+bi[i]+1),maxSum(pi,bi,n,i+1));
}
int main(){
	int pi[100],bi[100];
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>pi[i];
	for(int i=0;i<n;++i)
		cin>>bi[i];
	cout<<maxSum(pi,bi,n,0)<<endl;
	return 0;
}
