#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];
        int sum=0;
        for(int i=0;i<n;++i){
            for(int j=i+i;j<n;++j){
                if((arr[j]+arr[i])%4==0)
                    sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
