#include<iostream>
using namespace std;
int main(){
	int num,chill=1;
	cout<<"Number: ";
	cin>>num;
	for(int i=0; i<num; i++){
		int count=1;
		count=chill;
		chill=chill+i;
		for(int j=0; j<num; j++){
			chill=chill+j;
			cout<<chill<<" ";
		}
		cout<<"\n";
		chill=i;
	}
	return 0;
}
