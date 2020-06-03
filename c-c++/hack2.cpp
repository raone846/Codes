#include<bits/stdc++.h>
using namespace std;
int  main(){
	int n,sum1=0,sum2=0,flag=0;
	cin>>n;
	flag=n;
	int arr[n][n];
	for(int i=0 ;i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i=j)
				sum1=sum1+arr[i][j];
		}
		for(int j=0; j<n; j++){
			if(j==flag){
				sum2+=arr[i][j];
				flag--;
			}
		}
	}
	cout<<sum1<<endl;
	cout<<sum2<<endl;
	cout<<abs(sum1-sum2);
	return 0;
}
