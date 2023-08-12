#include<iostream>
using namespace std;

//adding element in a sorted array

void addElement(int a[],int n,int val)
{
    int loc;
    for(int i=0;i<n;i++)
    {
        if(a[i]<val && a[i+1]>val)
        {
            loc=i+1;
            break;
        }
    }
    for(int i=n;i>loc;i--)
    {
        a[i]=a[i-1];
    }
    a[loc]=val;
}
int main()
{
    int a[]={10,20,30};
    int n=sizeof(a)/sizeof(a[0]);
    addElement(a,n,15);
    n=4;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<n;
}