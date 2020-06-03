#include<iostream>
#include<vector>
using namespace std;
int sumofSubArray(vector<int> v, int n){
	int sum=0,c=0,num=n;
	int mod[num]={0};
	for(int i=0;i<n;++i){
		sum+=v[i];
		mod[((sum%num)+num)%num]++;
	}
	for(int i=0;i<num;i++)
		if(mod[i]>1)
			c+=(mod[i]*(mod[i]-1))/2;
	c+=mod[0];
	return c;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, num;
		cin>>n;
		vector<int> vect;
		for(int i=0;i<n;++i){
			cin>>num;
			vect.push_back(num);
		}
		cout<<sumofSubArray(vect,n)<<endl;
	}
	return 0;
}
