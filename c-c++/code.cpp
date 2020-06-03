#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b,c,d,p,q,y;
		cin>>n>>a>>b>>c>>d>>p>>q>>y;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int time1=abs(arr[b-1]-arr[a-1])*p;
		int time2=abs(arr[c-1]-arr[a-1])*p;
		if(time2<=y){
			int total_time=y+abs(arr[c-1]-arr[d-1])*q+abs(arr[d-1]-arr[b-1])*p;
			if(total_time<time1)
				cout<<total_time<<endl;
			else
				cout<<time1<<endl;
		}
		else
			cout<<time1<<endl;
	}
	return 0;			
}
