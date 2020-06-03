#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
	for(int i=1;i<=n-1;++i){
		int t=arr[i];
		int j=i-1;
		while(j>=0 and arr[j]>t){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=t;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	insertion_sort(arr,n);
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
	return 0;
}
