#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b,c,d,p,q,y,time=0,i;
		cin>>n>>a>>b>>c>>d>>p>>q>>y;
		int arr[n];
		for(i=0; i<n; i++){
			cin>>arr[i];
		}
		i=0;
		for(i=a;i<b;i++){
			if(c>b){
				time=time+p;
			}
			else if(c<b && b<d){
				time=time+p
			}
			else{
				
			}
			}
		cout<<time<<endl;
	}
	return 0;
			
}
