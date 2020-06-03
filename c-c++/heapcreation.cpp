#include<iostream>
using namespace std;
void heapify(int [],int,int);
void swap(int &,int &);
int main()
    {
        int n;
        cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=n/2;i>=0;i--)
            heapify(a,i,n);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        
    }
void heapify(int a[],int i,int n)
    {
        int c1=2*i,c2=2*i+1;
        int min=i;
        if(c1<n&&a[c1]<a[min])
            min=c1;
        if(c2<n&&a[c2]<a[min])
            min=c2;
        if(min!=i)
            {
                swap(a[i],a[min]);
                heapify(a,min,n);
            }    
    }
 void swap(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
