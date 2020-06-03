#include<stdio.h>
int main(){
    int t,out=0;
    int sum[10]={0,};
    char c1,c2;
    scanf("%d",&t);
    while(t--){
    	int n;
    	scanf("%d",&n);
    	string s;
    	vector <string> vec; 
    	for(int i=0;i<n;i++){	
    		cin>>s;
    		vec.push_back(s);
    	}
		for(int i=0;i<n;i++){
			for(int j=0;j<10;j++){
				c1=vec[i][j];
				int num1=(int)c1;
				sum[j] =sum[j]^(num1-48);
						
			}	
		}
	   for(int i=0;i<10;i++){
			if(sum[i]==1)
				out++;
		}
		cout<<out;
	}
    return 0;
}
