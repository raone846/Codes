#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q,ce=0,co=0;
		cin>>n>>q;
		int arr1[n], arr2[q],num;
		for(int i=0;i<n;++i)
			cin>>arr1[i];
		for(int i=0;i<q;++i)
			cin>>arr2[i];
		for(int i=0;i<q;++i){
			for(int j=0;j<n;++j){
				num=__builtin_parity(arr1[j]^arr2[i]);
				if(num==0)
					ce++;
				else if(num==1)
					co++;
			}
			cout<<ce<<" "<<co<<endl;
			ce=0;co=0;
		}
	}
	return 0;
}
