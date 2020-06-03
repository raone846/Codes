#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c=0;
		cin>>n;
		if(n==1||n==2||n==5||n==10||n==50||n==100)
			cout<<1<<endl;
		else{
			int arr[6]={1,2,5,10,50,100};
			for(int i=5; i>=0; ++i){
	 			if(arr[i]-n>=0){
					n=n-arr[i];
					c++;
				}
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
