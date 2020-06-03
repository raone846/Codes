#include<iostream>
#include<sstream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,f=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		std::ostringstream str;
		for(int i=0;i<n;++i){
			if(arr[i]-arr[i+1]==-1&&f==0){
				str<<arr[i];
				if(arr[i+1]-arr[i+1]!=-1)
					str<<",";
				f=1;
			}
			else if(arr[i]-arr[i+1]==-1&&f==1){
				str<<"...";
				f=2;
			}
			else if(arr[i]-arr[i+1]!=-1){
				str<<arr[i];
				if(i!=n-1)
					str<<",";
				f=0;
			}
		}
		std::string os(str.str());
		std::cout<<os;
		cout<<endl;
	}
	return 0;
}

