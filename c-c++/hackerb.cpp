#include<iostream>
using namespace std;
#define ll long long
void prime_sieve(int *p){
	for(int i=3;i<=1000000;i+=2)
		p[i] = 1;
	for(ll i=3;i<=1000000;i+=2){
		if(p[i] == 1){
			for(ll j=i*i;j<=1000000;j=j+i){
				p[j]=0;
			}
		}
	}
	p[2]=1;
	p[0]=p[1]=0;
}
int main(){
	int arr[1000005]={0};
	prime_sieve(arr);
	int arr1[1000005]={0};
	for(int i=1;i<=100000;++i)
		arr1[i]=arr1[i-1]+arr[i];
	int n;
	cin>>n;
	while(n--){
		int e,f;
		cin>>e>>f;
		cout<<arr1[f]-arr1[e-1]<<endl;
	}
	return 0;
} 
