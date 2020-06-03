#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Enter the no.:";
	cin>>n;
	for(i=3;i<n;i++){
		for(j=2;j<n;j++)
		{  
		    if(i%j==0)
		    break;
		}
		if(i==j)
		cout<<i<<endl;
	}	
}
