#include<iostream>
using namespace std;
int gcd(int a, int b){
	return b==0? a: gcd(b,a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	int g=gcd(a,b);
	cout<<g<<endl;
	int lcm=(a*b)/g;
	cout<<lcm<<endl;
	return 0;
}
