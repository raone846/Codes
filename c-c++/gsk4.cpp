#include<iostream>
using namespace std;
void mergesort(int [],int,int);
void merge(int [],int,int,int);
int find(int [],int,int);
int main()
 {
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key;
    cin>>key;
    mergesort(a,0,n-1);
    cout<<find(a,n,key);
 }
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
int find(int *a,int n,int key)
    {
      int ctr=0;
      for(int i=0;i<n;i++)
         {
            if(i+1<n&&a[i+1]!=a[i])
                {
                    while(i+1<n&&a[++i]==a[i]);
                    i--;
                }
            if(++ctr==key)
              return a[i];
         }
    }
