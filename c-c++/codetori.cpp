#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i,j,trip=0,c2=0;
	    cin>>n;
	    char battle[n][n];
	    for(i=0;i<n;++i)
	        for(j=0;j<n;++j)
	            cin>>battle[i][j];
	    for(i=0;i<n;++i){
	        int count=0;
	        for(j=0;j<n;++j){
	            if(battle[i][j]=='.'){
	                count++;
	            }
	        }
	        if(count==n-1){
	            trip++;
	        }
	    }
	    if(trip==n){
	        cout<<trip<<endl;
	    }
	    else{
	        trip=0;
	        for(i=0;i<n;i++){
	        	int c=0,c1=0;
	        	for(j=0;j<n;j++){
	            	if(i==0 || i==n-1){
	                	if(battle[i][j]!='.') c++;
	            		if(battle[j][i]!='.') c1++;
	            		if((i==j)&& (battle[i][j]!='.'))c2++;
	            	}
	        	}
	        	if(c==n) trip++;
	        	if(c1==n) trip++;     
	    	}
	    	if(c2==n) trip++;
	    		cout<<trip<<endl;
		}	 
	}
	return 0;
}
