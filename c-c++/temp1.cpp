#include<bits/stdc++.h>
using namespace std;
vector<int> sumofBits(vector<int> v){
	vector<int> ans;
    for(int i=0;i<v.size();++i){
        for(int j=i+1;j=v.size();++j){
        	if(v[j]==2&&v[i]==1||v[j]==1&&v[i]==2)
        		ans.push_back(2);
        	else{
        		int num=0;
        		num=__builtin_popcount(v[j]-v[i]);
        		ans.push_back(num);
			}
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,num;
        cin>>n;
        vector<int> vect(n);
        for(int i=0;i<n;++i){
            cin>>num;
            vect.push_back(num);
        }
        vector<int> ans=sumofBits(vect);
        int sum=0;
        for(int i=0;i<ans.size();++i){
        	sum+=ans[i];
		}
		cout<<sum<<endl;
    }
    return 0;
}
