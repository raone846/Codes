#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,num;
		cin>>n;
		vector<int> vect;
		for(int i=0;i<n;++i){
			cin>>num;
			vect.push_back(num);
		}
		int val;
		cin>>val;
		vect.erase(remove(vect.begin(), vect.end(),val),vect.end());
		cout<<vect.size()<<endl;
	}
	return 0;
}
