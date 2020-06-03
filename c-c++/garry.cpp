#include<iostream>
using namespace std;
int count(string s,int c,int i,int l){
	if(i==l-2)
	{
	   	cout<<c<<endl;
	   	return c;
	}
	else{
		string ch=s.substr(i,3);
		if(ch=="aaa")
		{
			c++;
		}
		count(s,c,i+1,l);		
	}	
}

int main()
{
	int c=0,co=0,cno=0,l;
	string s;
	cin>>s;
	l=s.length();
	co = count(s,c,0,l);
	cout<<co<<endl;
}
