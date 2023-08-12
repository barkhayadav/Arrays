#include<iostream>
using namespace std;

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
    int a[]={1,2,2,5,6,6,6,6,7};
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
    for(int i=0;i<max;i++)
    {
        if(h[i]>1)
        {
            cout<<i<<" is present "<<h[i]<<" times."<<endl;
        }
    }
}