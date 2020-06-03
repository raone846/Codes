#include<bits/stdc++.h>
using namespace std;
bool palindrome(string str, int l){
	for(int i=0;i<l;++i){
		if(str[i]!=str[l-i-1])
			return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int l=str.length();
		bool b=palindrome(str,l);
		if(b==true)
			cout<<"wins"<<endl;
		else
			cout<<"losses"<<endl;
	}
	return 0;
}
