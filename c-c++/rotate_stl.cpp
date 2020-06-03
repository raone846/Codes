#include<bits/stdc++.h>
using namespace std;
void display(int a[][1000],int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
void rotate_stl(int a[][1000],int n){
	for(int row=0; row<n;row++){
		reverse(a[i],a[i]+n);
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
