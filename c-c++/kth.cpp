#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,num, minElementIndex;
		auto minElement;
		stack<int> st;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;++i)
			cin>>num;
			arr.push_back(num);
		int k;
		cin>>k;
		while(k--){
			minElementIndex = std::min_element(arr.begin(),arr.end())-arr.begin();
			minElement = std::min_element(arr.begin(),arr.end());
			st.push(*minElement);
		}
		cout<<minElementIndex<<endl;
		cout<<*minElement<<endl;
		cout<<st.top()<<endl;
	}
	return 0;
}
