#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,f,l;
		cin>>n;
		l=n%10;
		while(n>0){
			f=n%10;
			n=n/10;
		}
		cout<<f+l<<endl;
	}
	return 0;
}
