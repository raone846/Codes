#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,j,count=0;
	cout<<"Enter the range: ";
	cin>>n;
	for(i=2;i<n;i++){
		for(j=2;j<n;j++){  
		    if(i%j==0)
		    break;
		}
		if(i==j){
		cout<<i<<endl;
		count++;
	}
	}
	cout<<count<<endl;
	return 0;	
}
