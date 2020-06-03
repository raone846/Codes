#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> mv;
	auto it = mv.emplace(mv.begin()+1, 100);
	mv.emplace(it, 200);
	mv.emplace(mv.end(), 300);
	cout<<"Vector contains: ";
	for(auto & x: mv){
		cout<<' '<<x;
	}
	cout<<"\n";
	return 0;
}
