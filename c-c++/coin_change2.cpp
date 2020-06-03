#include<iostream>
#include<climits>
using namespace std;
int coin_change(int n,int coins[],int t){
	int dp[1000]={0};
	for(int i=1;i<=n;++i){
		dp[i] = INT_MAX;
		for(int j=0;j<t;++j){
			if(i-coins[j]>=0){
				int subprob = dp[i-coins[j]];
				dp[i] = min(dp[i],subprob+1);
			}
		}
	}
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	int coins[]={1,7,10};
	cout<<coin_change(n,coins,3)<<endl;
	return 0;
}
