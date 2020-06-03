#include<iostream>
#include<climits>
using namespace std;
int matrixChainOrder(int *mat,int i,int j){
	if(i==j) return 0;
	int min = INT_MAX, count;
	for(int k=i;k<j;++k){
		count=matrixChainOrder(mat,i,k)+matrixChainOrder(mat,k+1,j)+mat[i-1]*mat[k]*mat[i];
		if(min>count)
			min = count;
	}
	return min;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	cout<<matrixChainOrder(arr,1,n-1)<<endl;
	return 0;
}