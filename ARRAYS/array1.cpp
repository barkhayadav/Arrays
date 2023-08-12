#include<iostream>
using namespace std;

//appending an element

class arr{
    private:
    int *a;
    int size;
    int length;
    public:
    arr(int size)
    {
        length=0;
        this->size=size;
        a=new int[this->size];
    }
    void append(int val);
    void insert(int loc,int val);
    int deleteItem(int loc);
    int linearSearch(int val);
    int binarySearch(int val);
    void display();
};

//inserting at the end

void arr::append(int val)
{
    if(size>length)
    {
        a[length]=val;
        length++;
    }
}

//inserting at a particular position

void arr::insert(int loc,int val)
{
    loc--;
    if(loc>size)
    {
        cout<<"Invalid location!";
    }
    else{
        for(int i=length;i>loc;i--)
        {
            a[i]=a[i-1];
        }
        a[loc]=val;
        length++;
    }
}

//deleting from a particular position

int arr::deleteItem(int loc)
{
    int x=-1;
    if(loc>size)
    {
        cout<<"Invalid location!";
    }
    else{
        x=a[loc-1];
        for(int i=loc-1;i<length;i++)
        {
            a[i]=a[i+1];
        }
        length--;
    }
    return x;
}

//searching for a particular value

int arr::linearSearch(int val)
{
    for(int i=0;i<length;i++)
    {
        if(a[i]==val)
        {
            return i;
            break;
        }
    }
    return -1;

}

//searching for a particular value

int arr::binarySearch(int val)
{
    int s=0;
    int e=length-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==val)
        {
            return mid;
        }
        else if(a[mid]>val)
        {
            e=mid-1;
        }
        else{
           s=mid+1;
        }
    }
    return -1;
}

//displaying all the elements

void arr::display()
{
    for(int i=0;i<length;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    arr ar(10);
    ar.append(1);
    ar.append(2);
    ar.append(3);
    ar.append(5);
    ar.insert(4,4);
    cout<<"Before deletion: ";
    ar.display();
    cout<<"After deletion: ";
    ar.deleteItem(2);
    ar.display();
    cout<<"The given value is present in the "<<ar.linearSearch(4)<<" index."<<endl;
    cout<<"The given value is present in the "<<ar.binarySearch(4)<<" index."<<endl;

}