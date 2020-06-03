#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,i;
	cin>>t;
	while(t--){
	    int n,f=1;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;++i)
	        cin>>arr[i];
	   	while(f){
	   		for(i=0;i<n;++i){
	   			if(i>=arr[i]){
	   				f=0;
	   				break;
	   			}
	   			arr[i]-=n;
			}
		}
		cout<<i+1<<endl;
	}
	return 0;
}
