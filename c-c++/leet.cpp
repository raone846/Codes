#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,num,count=0;
		cin>>n;
		vector<int> vect;
		for(int i=0;i<n;++i){
			cin>>num;
			vect.push_back(num);
		}
		vector<int>::iterator it;
		it = std::unique(vect.begin(), vect.begin()+vect.size());
		vect.resize(std::distance(vect.begin(), it));
		cout<<vect.size()<<endl;
	}
	return 0;
}
