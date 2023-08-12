#include<iostream>
using namespace std;

//checking if an array is sorted

bool isSorted(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int a[]={1,3,7};
    int n=sizeof(a)/sizeof(a[0]);
    isSorted(a,n-1)?cout<<"The given array is Sorted!":cout<<"The given array is not Sorted!";
}