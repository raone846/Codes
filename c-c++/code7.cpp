#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,p,lead=0,a=0,b=0;
	cin>>t;
	while(t--){
		int p1,p2;
		cin>>p1>>p2;
		a+=p1;
		b+=p2;
		if(a>b){
			if(abs(a>b)){
				lead=abs(a-b);
				p=1;
			}
		}
		else if(a<b){
			if(abs(a-b)>lead){
				lead=abs(a-b);
				p=2;
			}
		}
	}
	cout<<p<<" "<<lead<<endl;
	return 0;
}
