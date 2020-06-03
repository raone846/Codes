#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> mv;
	int sum (0);
	mv.push_back(100);
	mv.push_back(200);
	mv.push_back(300);
	while(!mv.empty()){
		sum+=mv.back();
		mv.pop_back();
	}
	cout<<"Sum of the vectors is "<<sum<<"\n";
	return 0;	
}
