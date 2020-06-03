#include<bits/stdc++.h>
using namespace std;
bool checkpal(string s){
	for(int i=0;i<s.length();i++){
		if(s[i]!=s[s.length()-i-1])
			return false;
	}
	return true;
}
void pal_subString(string str){
    int n= str.size();
    int co=0,ce=0;
    bool table[n][n];
    memset(table,0,sizeof(table));
    for(int i=0;i<n;++i){
        table[i][i]= true;
        co++;
    }
    for(int i=0;i<n-1;++i){
        if(str[i]==str[i+1]){
            table[i][i+1]=true;
            ce++;
        }
    }
    for(int k=3;k<=n;++k){
        for(int i=0;i<n-k+1;++i){
            int j=i+k-1;
            if(table[i+1][j-1]&&str[i]==str[j]){
                table[i][j]=true;
                if((i-k)%2==0)
                	ce++;
                else
                	co++;
            }
        }
    }
    if(checkpal(str)==false&&n%2==0)
    	ce++;
    else if(checkpal(str)==false&&n%2!=0)
    	co++;
    cout<<ce<<" "<<co<<endl;
}
int main(){
    string str;
    cin>>str;
    pal_subString(str);
    return 0;
}
