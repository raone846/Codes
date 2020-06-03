#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	while(cin>>n){
		if(n<3)
			cout<<n<<endl;
		else{
			cout<<((n/2)+(n/3)+(n/4))<<endl;
		}
	}
	return 0;
}
