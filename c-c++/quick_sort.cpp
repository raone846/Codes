#include<iostream>
using namespace std;
int  partition(int *a,int s,int e){
	int i= s-1;
	int j=s;
	int pivot=a[e];
	for(;j<=e-1;j++){
		if(a[j]<=pivot){
			i=i+1;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
}
void quick_sort(int arr[],int s,int e){
	if(s>=e)
		return;
	int p=partition(arr,s,e);
	quick_sort(arr,s,p-1);
	quick_sort(arr,p+1,e);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	quick_sort(arr,0,n-1);
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
	return 0;
}
