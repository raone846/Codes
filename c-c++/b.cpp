#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long ingred[n],i,x,d;
	int min=LLONG_MAX;
	for(i=0;i<n;i++)
		cin>>ingred[i];
	for(i=0;i<n;i++)
	{
       cin>>x;
	   d=x/ingred[i];
	   if(min>d)
	   {
		   min=d;
	   }
	}
	cout<<min<<"\n";
	return 0;
}
