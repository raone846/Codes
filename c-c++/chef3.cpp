#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	queue<int> q;
	cin>>t;
	while(t--){
		int n,flag=0;
		cin>>n;
		while(n>0){
			if(n%10==0 &&flag==0)
				n=n/10;
			else{
			flag=1;
			cout<<n%10;
			n=n/10;
			}
		}
		cout<<endl;
	}
	return 0;
}
