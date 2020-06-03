#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr1[n],arr2[n];
        for(int i=0;i<n;++i)
            cin>>arr1[i];
        for(int i=0;i<n;++i)
            cin>>arr2[i];
        std::sort(arr1,arr1+n);
        std::sort(arr2,arr2+n);
        for(int i=0;i<n;++i)
            cout<<arr1[i]<<" ";
        cout<<"\n";
        for(int i=0;i<n;++i)
            cout<<arr2[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
