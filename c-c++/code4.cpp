#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	if(t>0&&t<=1000){
		while(t--){
			int a,b,sum=0;
			cin>>a>>b;
			if(a>0&&a<=10000&&b>0&&b<=10000){
				sum=a%b;
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
