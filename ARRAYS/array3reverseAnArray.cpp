#include<iostream>
using namespace std;

//reverse an array

void reverse(int i,int n,int a[])
{
    while(i<=n)
    {
        swap(a[i],a[n]);
        i++;
        n--;
    }
}
int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    reverse(0,n-1,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}