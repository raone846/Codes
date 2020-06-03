#include<bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int> c) {
    int count=0;
    vector<int>::iterator it;
    //vector<int>::iterator vt=c.end();
    for(it=c.begin(); it!=c.end(); it++){
       // if(*it==*(it+2)==0){
         //   count++;
           // it++;
           // continue;
        //}
        if(*it==*(it+1)==0){
            count++;
        }
        /*if(it==vt){
            count++;
        }*/
    }
    return count;
}
int main(){
	int n,num;
	cin>>n;
	vector<int> vect(n);
	for(int i=0; i<n; i++){
		cin>>num;
		vect.push_back(num);
	}
	int out=jumpingOnClouds(vect);
	cout<<out;
	return 0;
}
