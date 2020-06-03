#include<iostream>
using namespace std;
int main(){
	int arr[100],num,i,j;
	cin>>num;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			if(j<=i)
			cout<<"*";
		}
		cout<<"\n";
	}
}
