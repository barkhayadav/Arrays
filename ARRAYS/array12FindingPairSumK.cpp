#include<iostream>
using namespace std;

//finding pair of elements whose sum is k

int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=5;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                cout<<a[i]<<" and "<<a[j]<<" gives "<<sum<<endl;
            }
        }
    }
}