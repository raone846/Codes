#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int b;
	    cin>>b;
	    int n=(b-2)/2;
	    b=(n*(n+1))/2;
	    cout<<b<<endl;
	}
	return 0;
}
