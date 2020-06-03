#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;	
	while(t--)
	{
		int n;
		cin >> n;
		int total = 0;
		int count;
		char str[n][10];
		for(int i=0; i<n; i++)
			cin >> str[i];	
		for(int i=0; i<10; i++)
		{
			count = str[0][i] - 48;
			for(int j=1; j<n; j++)
				count = count ^ (str[j][i] - 48);
				
			total = total + count;
		}	
		cout << total << endl;
	}
}
