#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mod 1000000007
#define M 100001
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define rep(i,a,b) for(i=a;i<b;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vp;
typedef vector<vi> vv;

int main(){
    fast;
    string s;
    cin>>s;
    stringstream num(s);
    int x=0;
    num>>x;
    int sum=__builtin_popcount(x);
    cout<<sum;

    return 0;
}
