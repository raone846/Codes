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
	int arr1[n],arr2[n];
	for(int i=0;i<n;++i)
		cin>>arr1[i];
	for(int i=0;i<n;++i)
		cin>>arr2[i];
	int num=2*n;
	int arr3[num];
	for(int i=0;i<n;++i)
		arr3[i]=arr1[i];
	for(int i=n;i<num;++i)
		arr3[i]=arr2[i-n];
	insertion_sort(arr3,num);
	for(int i=0;i<num;++i)
		cout<<arr3[i]<<" ";
	return 0;
}
