#include<bits/stdc++.h>
using namespace std;
bool checkpal(string s){
    for(int i=0;i<s.length();++i){
        if(s[i]!=s[s.length()-i-1])
            return false;
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    bool b = checkpal(str);
    if(b==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
