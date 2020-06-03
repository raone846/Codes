#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void solution(string &s, int i){
	if(i == s.size()){
		ans.push_back(s);
		return ;
	}
	solution(s, i+1);
	if(isalpha(s[i])){
		s[i] ^= (1 << 5);
		solution(s,i+1);
	}
}
int main(){
	string str;
	cin>>str;
	solution(str, 0);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();++i)
		cout<<ans[i]<<endl;
	return 0;
}
