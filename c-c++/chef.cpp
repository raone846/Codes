#include<iostream>
using namespace std;
int main(){
	int t,i,n,pos=-1;
	float mean=0.0;
	cin>>t;
	while(t--){
		double sum=0.0;
		cin>>n;
		int a[n];
		pos=-1;
		for(i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		mean=sum/n;
		for(i=0;i<n;i++){
			if(a[i]==mean){
				pos=i+1;
				break;
			}
		} 
		if(pos!=-1)
		cout<<pos<<"\n";
		else
		cout<<"Impossible";
	}
	
	 return 0;
}
