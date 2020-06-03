#include<iostream>
#include<climits>
using namespace std;
int minSteps(int a,int b,int dp[]){
	if(a==b){
		return 0;
	}
	if(dp[a]!=0){
		return dp[a];
	}
	int op1,op2,op3;
	op1 = op2 = op3 = INT_MAX;
	if(a%2==0){
		op1 = minSteps(a+1,b,dp)+1;
	}	
	else{
		op1 = minSteps(a-1,b,dp)+1;
	}
	if(a%2==0){
		op2 = minSteps(a/2,b,dp)+1;
	}
	op3 = minSteps(a*2,b,dp)+1;
	int ans = min(min(op1,op2),op3);
	return dp[b] = ans;	
}
int main(){
	int a,b;
	cin>>a>>b;
	int dp[100]={0};
	cout<<minSteps(a,b,dp)<<endl;
	return 0;
}
