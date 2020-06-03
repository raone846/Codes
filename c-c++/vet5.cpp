#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> mv;
	for(int i=1; i<10; i++)
	mv.push_back(i);
	mv.erase(mv.begin()+5);
	mv.erase(mv.begin(),mv.begin()+3);
	cout<<"Vector contains: ";
	for(unsigned i=0; i<mv.size(); ++i)
		cout<<' '<<mv[i];
	cout<<"\n";
	return 0;
}
