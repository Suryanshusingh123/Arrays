#include<iostream>
using namespace std;

int main()
{
    int a[100],n;
    cout<<"enter the no of elements:";
    cin>>n;
    cout<<"enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(a[i],a[i+1]);
        }
    }

    cout<<"the swapped aray is:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

}
