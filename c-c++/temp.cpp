#include<bits/stdc++.h>
using namespace std;
vector<int> pairs(vector<int> v){
	vector<int> ans;
	for(int i=0;i<v.size();++i){
		for(int j=i+1;j<v.size();++j){
			if(abs(v[j]-v[i])>1)
				ans.push_back(v[j]-v[i]);
		}
	}
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	   int n,sum=0,v;
	   cin>>n;
	   vector<int> vect;
	   for(int i=0;i<n;++i){
			cin>>v;
			vect.push_back(v);
		}
		vector<int> ans = pairs(vect);
		for(int i=0;i<ans.size();i++)
			sum +=ans[i];
	   cout<<sum<<endl;
	}
	return 0;
}
