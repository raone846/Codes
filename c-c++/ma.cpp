#include<iostream>
using namespace std;
int main(){
	int arr[100],num,c,i,j;
	cin>>num;
	for(i=0;i<num;i++){
		cin>>arr[i];
}
	for(i=0;i<arr[i];i++){
		c=(2*arr[i])-1;
		for(j=0;j<(2*arr[i]);j++){
			if(j<=i)
			cout<<"*";
		    else if(j>=c){
				cout<<"*";
				c=c-1;
			}
			else
			cout<<"#";
		}
		cout<<"\n";
	}
	return 0;
}
