#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    int N=n+1;
    int totalSum=N*(N+1)/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"The missing element is "<<totalSum-sum<<endl;
}