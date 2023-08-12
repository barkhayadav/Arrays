#include<iostream>
#include<vector>
using namespace std;

//left rotating an array

vector<int> leftRotate(int a[],int n,int noOfRotate,vector<int>&v)
{
    for(int i=noOfRotate;i<n;i++)
    {
        v.push_back(a[i]);
    }
    for(int i=0;i<noOfRotate;i++)
    {
        v.push_back(a[i]);
    }
    return v;
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    leftRotate(a,n,2,v);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}