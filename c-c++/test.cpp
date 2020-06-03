#include<iostream>
using namespace std;
int count(string s,int **c,int i,int l)
{
		if(i==l-2)
    	{
    		//cout<<c<<endl;
		}
		else{
	  		string ch=s.substr(i,3);
			if(s.substr(i,3)=="aaa")
			{
				(*c)++;
			}
			count(s,&c,i+1,l);
		}
}
int main()
{
	int **c,co=0,l;
	string s;
	cin>>s;
	l=s.length();
	co=count(s,&c,0,l);
	cout<<co;
	return 0;
}
