#include<iostream>
using namespace std;

//finding multiple missing element in an array

int maxNum(int a[],int n)
{
    int maxNo=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxNo)
        {
            maxNo=a[i];
        }
    }
    return maxNo;
}
int main()
{
    int a[]={1,2,5,6,9};
    int n=sizeof(a)/sizeof(a[0]);
    int max=maxNum(a,n);
    int *h=new int[max];
    for(int i=0;i<max;i++)
    {
        h[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        h[a[i]]++;
    }
    for(int i=1;i<max;i++)
    {
        if(h[i]==0)
        {
            cout<<i<<" ";
        }
    }
    
}