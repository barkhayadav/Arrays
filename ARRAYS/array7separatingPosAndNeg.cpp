#include<iostream>
using namespace std;

//separating poitive and negative numbers

void sepPosAndNeg(int a[],int n)
{
   int i=0;
   int j=n-1;
   while(i<j)
   {
    if(a[i]<0)
    {
        i++;
    }
    if(a[j]>=0)
    {
        j--;
    }
    if(i<j)
    {
        swap(a[i],a[j]);
    }
   }
}
int main()
{
    int a[]={1,2,-3,4,-8,7};
    int n=sizeof(a)/sizeof(a[0]);
    sepPosAndNeg(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}