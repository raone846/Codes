#include<bits/stdc++.h>
using namespace std;
int xor_prime(int n){
    int sum=0;
    bool p[n+1];
    memset(p,true, sizeof(p));
    for(int i=2;i*i<=n;i++){
        if(p[i]==true){
            for(int j=i*i;j<=n;j+=i)
                p[j]=false;
        }
    }
    for(int i=2;i<=n;i++)
        if(p[i]==true)
            sum=sum^i;
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<xor_prime(n);
    return 0;
}
