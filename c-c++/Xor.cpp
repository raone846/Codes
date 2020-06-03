#include<iostream>
using namespace std;
int main(){
	char str[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	for(int i=0;i<n;i++){
		cout<<str[i];
	}
}
