#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,f=0;
		cin>>n;
		for(int i=2;i<=sqrt(n);++i){
			if(n%i==0){
				cout<<"no"<<endl;
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<"yes"<<endl;
	}
	return 0;
}
