#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	float b,sum;
	cin>>a>>b;
	sum=b;
	if(a+0.5<=b && a%5==0)
		sum=b-a-0.5;
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
}
