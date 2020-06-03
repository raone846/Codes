#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n ,i,count=0,sum,b,c[2]={}; 
		cin>>n;
		vector< pair <string,int> > pr; 
		string s;
		for(i=0;i<n;i++){
			cin>>s>>b;
			pr.push_back(make_pair(s,b) );
		}
		sort(pr.begin(),pr.end());
		for(i=0;i<n-1;i++){
			c[0]=0;c[1]=0;
			while((i<n-1)&& (pr[i].first==pr[i+1].first)){
				c[pr[i].second]++;
				i++;
			}
			c[pr[i].second]++;
			sum+=max(c[0],c[1]);
		}
		i=n-1;c[0]=0;c[1]=0;
		if(pr[i].first!=pr[i-1].first){
			c[pr[i].second]++;
			sum+=max(c[0],c[1]);
		}
		cout<<sum-42<<endl;
	}
	return 0;
}

