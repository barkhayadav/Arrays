#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeTwoSortedArray(int a[],int b[],int n,int m,vector<int>&v)
{
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }
    while(i<n)
    {
        v.push_back(a[i]);
        i++;
    }
    while(j<m)
    {
        v.push_back(b[j]);
        j++;
    }
    return v;
}
int main()
{
    
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    vector<int>v;
    mergeTwoSortedArray(a,b,n,m,v);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}