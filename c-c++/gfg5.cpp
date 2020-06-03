#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int r,c,temp;
		cin>>r>>c;
		int arr[r][c];
		for(int i=0;i<r;++i)
			for(int j=0;j<c;++j)
				cin>>arr[i][j];
		for(int i=0;i<r;++i){
        //	int temp;
        	temp=arr[i][0];
        	arr[i][0]=arr[i][c];
        	arr[i][c]=temp;
    	}
    	cout<<"\n";
    	for(int i=0;i<r;i++){ 
	       for(int j=0;j<c;j++){
    	        cout<<arr[i][j]<<" ";   
    	    }
    		 cout<<endl;
	   	}
	}
	return 0;
}
