#include<iostream>
#include<vector>
using namespace std;

//set operations-union,intersection

//union of two arrays

vector<int> unionOfTwoArray(int a[],int b[],int n,int m,vector<int>&v)
{
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
    }
    for(int j=0;j<m;j++)
    {
        v.push_back(b[j]);
    }
    return v;
}

//intersection of two arrays

vector<int> intersectionOfTwoArray(int a[],int c[],int n,int p,vector<int>&q)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            if(a[i]==c[j])
            {
                q.push_back(a[i]);
            }
        }
    }
    return q;
}
int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    int b[]={4,5,6};
    int m=sizeof(b)/sizeof(b[0]);
    int c[]={2,3,5,6};
    int p=sizeof(c)/sizeof(c[0]);
    vector<int>v;
    vector<int>q;
    vector<int>r;
    unionOfTwoArray(a,b,n,m,v);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    intersectionOfTwoArray(a,c,n,p,q);
    for(auto it:q)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}