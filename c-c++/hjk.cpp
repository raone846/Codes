#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void distribute(int a[],int n,int k,int sum)
{
	int maxsum=sum/k,s=0,temp=0;
	int prefix[n],i;
	vector <int>v;
	prefix[0]=a[0];
	for(i=1;i<n;i++)
		prefix[i]=prefix[i-1]+a[i];
	for(i=0;i<n;i++)
	{
		s=s+prefix[i];
		if(s-1>maxsum && temp>k-1)
		{
			temp--;
			s=s-prefix[i];
			v.push_back(s);
			s=prefix[i];
		}
		if(temp==k-1)
		{
			break;
		}
	}
	for(i=0;i<v.size();i++)
	{
		cout<<"hey";
		cout<<v[i]<<endl;
	}
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,cuts,sum=0;
		cin>>n>>cuts;
		int a[n];
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				sum=sum+a[i];
			}
		distribute(a,n,cuts,sum);

	}										
	return 0;	
}
