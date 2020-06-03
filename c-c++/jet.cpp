#include<iostream>
using namespace std;
int main(){
	int num,ch=1,n=1;
	cout<<"Number: ";
	cin>>num;
	for(int i=0; i<num; i++){
		int count=1;
		count=ch;
		ch=ch+i;
		for(int j=0; j<num; j++){
			ch=ch+j;
			cout<<ch<<" ";
			//n++;
		}
		cout<<"\n";
		n++;
		ch=n;
	}
	return 0;
}
