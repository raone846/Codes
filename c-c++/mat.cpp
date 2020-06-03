#include<iostream>
using namespace std;
int mat1(int i1, int mov){
	if(i1<2){
		i1++;
		mov++;
		mov=mat1(i1,mov);
	}
	else if(i1>2){
		i1--;
		mov++;
		mov=mat1(i1,mov);
	}
	return mov;
}
	
int mat2(int j1, int mov){
	if(j1<2){
		j1++;
		mov++;
		mov=mat2(j1,mov);
	}
	else if(j1>2){
		j1--;
		mov++;
		mov=mat2(j1,mov);
	}
	return mov;
}
int main(){
	int a[5][5], i1=0, j1=0, mov1=0,mov2=0,sum=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
				cin>>a[i][j];
				if(a[i][j]==1){
					i1=i;
					j1=j;
				}
			}
	}
    mov1=mat1(i1,mov1);
    mov2=mat2(j1,mov2);
    sum=mov1+mov2;
	cout<<sum;
	return 0;
}
