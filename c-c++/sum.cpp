#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main(){
	int ch,y=1;
	float n1,n2,sum=0;
	while(y==1){
	  system("Color F3");
	  cout<<"Enter Your choice: \n";
	  cout<<"1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit\n";
	  cin>>ch;
	  switch(ch){
		   case 1:
		   	  system("CLS");
			  cout<<"Enter the digits: ";
			  cin>>n1>>n2;
			  sum=n1+n2;
			  cout<<"sum="<<sum<<endl;
			  Sleep(1500);
			  break;
		   case 2:
		   	  system("CLS");
			  cout<<"Enter the digits: ";
			  cin>>n1>>n2;
			  sum=n1-n2;
			  cout<<"sub="<<sum<<endl;
			  Sleep(1500);
			  break;
		   case 3:
		   	  system("CLS");
			  cout<<"Enter the digits: ";
			  cin>>n1>>n2;
			  sum=n1*n2;
			  cout<<"mul="<<sum<<endl;
			  Sleep(1500);
			  break;
		   case 4:
		   	  system("CLS");
			  cout<<"Enter the digits: ";
			  cin>>n1>>n2;
			  sum=n1/n2;
			  cout<<"div="<<sum<<endl;
			  Sleep(1500);
			  break;
		   case 5:
		   	  system("CLS");
			  y=0;
			  break;
	   }
	   system("CLS");
	   if(y==0)
	   break;
   }
}
