#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		while(1){
			if(a==b||a>b)
				break;
			if(a*2>b+1||(a*2)*2>b+1){
				a=a-1;
				cout<<"eat ";
			}
			else{
				a=a*2;
				cout<<"overflow ";
			}
		}
	}
	return 0;
}
