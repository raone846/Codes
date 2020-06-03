#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define max 3*100000

int main() {
    int n, q,i=0,j=0,num=0,s1,s2;
    cin>>n>>q;
    vector<vector<int> > v1(n, vector<int> ());
    vector<pair<int, int> > v2;
    //vector<vector<int> >::iterator it;
    for(i=0; i<n; i++){
        for(j=0; j<max; j++){
            cin>>v1[i][j];
        }
    }
    for(i=0; i<q; i++){
       cin>>s1>>s2;
       v2.push_back(make_pair(s1,s2));
    }
    for(i=0; i<n; i++){
        for(j=0; j<max; j++){
            if(v2[i].first == i && v2[i].second == j){
                int temp = v1[i][j];
                cout<<temp<<endl;
            }
        }    
    }
    return 0;
}
