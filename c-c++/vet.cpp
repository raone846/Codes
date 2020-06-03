#include<iostream>
#include<vector>
int main(){
	std::vector<int> myvect;
	int myint;
 	std::cout<<"Enter some no.(Put 0 at last): \n";
 	do{
 		std::cin>>myint;
 		myvect.push_back (myint);	
	 }while (myint);
	 std::cout<<"myvector stores "<<int(myvect.size()) <<" numbers..... \n";
	 return 0;
 	
}
