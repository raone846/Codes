#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vect;
    vector<int>::iterator it=vect.end();
    vector<int>::iterator vt;
	int t;
	cin>>t;
	while(t--){
		int a, r;
    	cin>>a;
    	while (a > 0) {
        	r = a % 10;
        	vect.push_back(r);
        	a = a / 10;
    	}
    	sort(vect.begin(),vect.end());
    	vect.erase(it);
    	for(vt=vect.begin();vt!=vect.end();vt++){
    		cout<<"hello";
    		cout<<*vt;
    	}
    	cout<<"\n";
	}
    return 0;
}
