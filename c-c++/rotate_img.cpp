#include<bits/stdc++.h>
using namespace std;
void display(int a[][1000],int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
void rotate(int a[][1000],int n){
	for(int row=0; row<n;row++){
		int st=0,en=n-1;
		while(st<en){
			swap(a[row][st],a[row][en]);
			st++;
			en--;
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i<j){
				swap(a[i][j],a[j][i]);
			}
		}
	}
}

int main(){
	int arr[1000][1000];
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin>>arr[i][j];
			
	rotate(arr,n);		
	display(arr,n);
	return 0;
}
