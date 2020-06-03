#include<iostream>
using namespace std;
void merge(int a[],int ll,int m,int rr)
{
int s1=m-ll+1;
int s2=rr-m;
int l[s1],r[s2],k=ll;
  	for(int i=0;i<s1;i++)
		l[i]=a[k++];
	for(int i=0;i<s2;i++)
		r[i]=a[k++];
	k=ll;
	int i=0,j=0;
	while (i<s1 && j<s2)
      {
	if(l[i]<r[j])
		a[k++]=l[i++];
	else 
		a[k++]=r[j++];
      }
	while (i<s1)
     		a[k++]=l[i++];
	while (j<s2)
        	a[k++]=r[j++];
}
void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
	int m=(l+r)/2;
	mergesort(a,l,m);
	mergesort(a,m+1,r);
	merge(a,l,m,r);
	}
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];

mergesort(a,0,n-1);

for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
cout<<endl;

return 0;
}
