#include<iostream>
#include<climits>
using namespace std;
int minSteps(int a,int b){
	int dp[100]= {0};
	dp[1]=0;
	for(int i=a+1;i<=b;++i){
		int op1,op2,op3,op4;
		op1 = op2 = op3 = op4 = INT_MAX;
		if(i%2==0){
			op1 = dp[i+1];
			op2 = dp[i/2];
		}
		if(i%2!=0){
			op3 = dp[i-1];
		}
		op4 = dp[i*2];
		dp[i] = min(min(min(op1,op2),op3),op4)+1;
	}
	return dp[b];
	/*
	if(a==b)
		return 0;
	if(b%a==0)
		return (b/a+1);
	return (b/a);*/
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<minSteps(a,b);
	return 0;
}
