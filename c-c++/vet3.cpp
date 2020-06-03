#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> mv(3,100);
	vector<int>::iterator it;
	it=mv.begin();
	it=mv.insert(it, 200);
	mv.insert(it,2,300);
	it= mv.begin();
	vector<int> anothervector (2, 400);
	mv.insert(it+2, anothervector.begin(), anothervector.end());
	int myarr [] = { 501, 502, 503};
	mv.insert(mv.begin(), myarr, myarr+3);
	cout<<"Vector contains: ";
	for (it=mv.begin(); it<mv.end();it++){
		cout<<' '<<*it;
	}
	cout<<"\n";
	return 0;
}
