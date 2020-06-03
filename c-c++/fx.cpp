#include<iostream>
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
		for(int i=0;i<n;++i){
			if(arr[i]-arr[i+1]==-1&&arr[i+1]-arr[i+2]!=-1&&f==0){
				cout<<arr[i];
				cout<<",";
				f=1;
			}
			else if(arr[i]-arr[i+1]==-1&&f==0){
				cout<<arr[i];
				f=1;
			}
			else if(arr[i]-arr[i+1]==-1&&f==1){
				cout<<"...";
				f=-1;
			}
			else if(arr[i]-arr[i+1]!=-1){
				cout<<arr[i];
				if(i!=n-1)
					cout<<",";
				f=0;
			}
		}
		cout<<endl;
	}
	return 0;
}
