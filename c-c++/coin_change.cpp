#include<iostream>
#include<climits>
using namespace std;
int coin_Change(int n,int coins[],int t,int dp[]){
	if (n==0)
		return 0;
	if(dp[n]!=0)
		return dp[n];
	int ans = INT_MAX;
	for(int i=0;i<t;++i){
		if(n-coins[i]>=0){
			int subprob = coin_Change(n-coins[i],coins,t,dp);
			ans = min(ans,subprob+1);
		}
	}
	dp[n]=ans;
	return dp[n];
}
 int main(){
 	int n;
 	cin>>n;
 	int coins[] ={1,7,10};
 	int dp[10000]={0};
 	cout<<coin_Change(n,coins,3,dp)<<endl;
 	return 0;
 }
