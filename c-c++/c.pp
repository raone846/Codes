#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int arr1[n];
    for(int i=0;i<n;++i)
        cin>>arr1[n];
    int min=INT_MAX;
    arr[0]=arr1[0]/arr[0];
    min=arr[0];
    for(int i=1;i<n;++i){
        arr[i]=arr1[i]/arr[i];
        if(min>arr[i])
            min=arr[i];
    }
    cout<<min<<endl;
    return 0;
}
