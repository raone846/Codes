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

bool gp(unsigned int n){
	bool parity=0;
	while(n){
		parity=!parity;
		n=n&(n-1);
	}
	return parity;
}

int main(){
	ll t,n,e,o,i,j,temp;
	cin>>t;
	while(t--){
		cin>>n;
		map <int,int> a;
		map<int,int>::iterator k;
		e=o=0;
		rep(i,0,n){
			cin>>temp;
			if(gp(temp)){
				j=e;
				e+=o;
				o+=j;
				o++;
			}
			else{
				e+=e;
				o+=o;
				e++;
			}
			cout<<e<<" "<<o<<endl;
		}
	}
}
