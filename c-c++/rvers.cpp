#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,sum=0;
		int res,t=0;
		cin>>x;
		if(x==0)
			cout<<x<<endl;
		else if(x>0||x<0){
			while(x!=0){
				res=x%10;
				if(res==0&&t==0)
					t=1;
				else{
					sum=sum*10+res;
					x=x/10;
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
