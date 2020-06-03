#include<stdio.h>
#define MAX 100
void counting(int arr[], int n){
	int out[n];
	int count[MAX]={0,},i;
	memset(count,0,sizeof(count));
	for(i=0;i<arr[i];i++){
		count[arr[i]]++;
	}
	for(i=1;i<=MAX;i++)
		count[i]+=count[i-1];
	for(i=0;i<n;i++){
		out[count[arr[i]-1]]=arr[i];
		--count[arr[i]];
	}
	for(i=0;arr[i];i++)
		arr[i]=out[i];
}
int main(){
	int n;
	scanf("%d\n",&n);
	int arr[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	counting(arr,n);
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
