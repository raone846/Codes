#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0,num;
		cin>>n;
		while(n>0){
			num=n%10;
			if(num==4)
			count++;
			n=n/10;
		}
		cout<<count<<endl;
	}
	return 0;
}
