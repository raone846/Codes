#include<iostream>
using namespace std;
int pat(int n,string s){
	if(n==0)
	return 0;
	else{
		cout<<s<<endl;
		s=s+"* ";
	 	pat((n-1),s);
	}
}
int main(){
	int n;
	cin>>n;
	pat(n,"* ");
	return 0;
}
