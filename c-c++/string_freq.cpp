#include<iostream>
#include<string>
using namespace std;
int main(){
	int f[26]={0};
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;++i)
		f[s.at(i)-'a']++;
	for(int i=0;i<26;++i)
		if(f[i]!=0)
			cout<<char(i+97)<<"-"<<f[i]<<endl;
	return 0;
}
