#include<iostream>
using namespace std;
int mat(int i1, int j1, int mov){
		if(j1<2){
			j1++;
			mov++;
			mat(i1,j1,mov);
		}
		if(j1>2){
			j1--;
			mov++;
			mat(i1,j1,mov);
		}
		if(i1<2){
			i1++;
			mov++;
			mat(i1,j1,mov);
		}
		if(i1>2){
			i1--;
			mov++;
			mat(i1,j1,mov);
		}		
	return mov;
}
int main(){
	int a[5][5], i1=0, j1=0, mov=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
				cin>>a[i][j];
				if(a[i][j]==1){
					i1=i;
					j1=j;
				}
			}
	}
    mov=mat(i1,j1,mov);
	cout<<mov;
	return 0;
}
