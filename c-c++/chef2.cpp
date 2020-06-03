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

/*bool gp(unsigned int n){
	bool parity=0;
	while(n){
		parity=!parity;
		n=n&(n-1);
	}
	return parity;
}
*/
int main(){
    fast;
    int t, x, i, q, co=0,ce=0;
    vi vet;
    map<int, int> count;
    cin>>t;
    while(t--){
    	cin>>q;
    	for(i=0;i<q;i++){
    		cin>>x;
    	//	co=0;
    	//	ce=0;
    		if(vet.size()==0){
    			vet.push_back(x);
    				if(gp(x)==0)
				{
					ce++;
				}
				else
				{
					co++;
				}
    			count[x]++;
    		}
    		else{
				vet.push_back(x);
					if(gp(x)==0)
				{
					ce++;
				}
				else
				{
					co++;
				}
				int s=vet.size();
				s=s-1;
				while(s--){
					vet.push_back(vet[s]^x);
					if(gp(vet[s]^x)==0)
				{
					ce++;
				}
				else
				{
					co++;
				}
					count[(vet[s]^x)]++;
				}
			}
		cout<<ce<<" "<<co<<"\n";
		}
	}

    return 0;
}
