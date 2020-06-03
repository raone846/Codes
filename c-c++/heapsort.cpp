#include<iostream>
using namespace std;
 void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void heapify(int a[],int i,int n){
    int c1=2*i,c2=2*i+1;
    int min=i;
    if(c1<n&&a[c1]<a[min])
        min=c1;
    if(c2<n&&a[c2]<a[min])
        min=c2;
    if(min!=i){
        swap(a[i],a[min]);
        heapify(a,min,n);
    }    
}

void heap_sort(int arr[], int n){
	for(int i=n/1-1;i>=0;i--){
		heapify(arr,i,n);
	}	
	for(int i=n-1;i>=0;i--){
		swap(arr[0],arr[i]);
		heapify(arr,0,i);
	}
}
int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n/2;i>=0;i--)
    	heapify(a,i,n);
    heap_sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
