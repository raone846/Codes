#include<iostream>
using namespace std;
int main(){
	int a[150],b[150],T,N,i,j,sum[150];
	cin>>T;
	while(T--){
	
		cin>>N;
		for(j=0;j<N;j++)
			cin>>a[j];
		for(j=0;j<N;j++){
			cin>>b[j];
			sum[j]=(a[j]*20)-(b[j]*10);
		}
		int max=sum[0];
		for(i=1;i<N;i++){
			if(max>sum[i]){
				max=sum[i];
			}
		}
		if(max<0)
		 max=0;
		 cout<<max<<endl;
   }
   return 0; 
}
