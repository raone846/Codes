#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
	int mid =(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	int t[100];
	while(i<=mid && j<=e){
		if(arr[i]<arr[j])
			t[k++]=arr[i++];
		else
			t[k++]=arr[j++];
	}	
	while(i<=mid){
		t[k++]=arr[i++];
	}
	while(j<=e){
		t[k++]=arr[j++];
	}
	for(int i=s;i<=e;i++)
		arr[i]=t[i];
}
void merge_sort(int arr[],int s,int e){
	if(s>=e)
		return;
	int mid=(s+e)/2;
	merge_sort(arr,s,mid);
	merge_sort(arr,mid+1,e);
	merge(arr,s,e);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	merge_sort(arr,0,n-1);
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
	return 0;
}
