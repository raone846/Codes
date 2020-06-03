#include<iostream>
using namespace std;
#define ll long long
void prime_sieve(int *p,int n){
	for(int i=3;i<=n;i+=2)
		p[i] = 1;
	for(ll i=3;i<=n;i+=2){
		if(p[i] == 1){
			for(ll j=i*i;j<=n;j=j+i)
				p[j]=0;
		}
	}
	p[2]=1;
	p[0]=p[1]=0;
}
int main(){
	int n;
	cin>>n;
	int arr[n]={0};
	prime_sieve(arr,n);
	for(int i=0;i<n;++i){
		if(arr[i]==1)
			cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}
