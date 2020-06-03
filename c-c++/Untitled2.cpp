#include<iostream>
using namespace std;
int sum(int a , int b)
{
	int c;
	if(a>b)
	{
	
	c= a-b;
	cout<<c<<endl;
	return c;
}
else return 5;
}
int main()
{
	int a,b,c;
	cout<<"ENter values for a b"<<endl;
	cin>>a>>b;
	c=sum(a,b);
	cout<<c<<endl;

}

