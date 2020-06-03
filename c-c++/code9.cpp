#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int m[12];
	for(int i=0;i<12;++i)
		m[i] = pow(2,i);
	while(t--){
		int p;
		cin>>p;
		int count=0;
		int f=0;
		while(p>0){
			for(int i=11;i>=0;i--){
				float x;
				x = (float)p/(float)m[i];
				if(x>=1.0){
					f=i;
					count++;
					break;
				}
				else
					continue;
			}
			p=p-m[f];
		}
		cout<<count<<endl;
	}
	return 0;
}
