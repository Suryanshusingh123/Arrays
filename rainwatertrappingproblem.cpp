#include<iostream>
using namespace std;

int main()
{
    int a[]={3,1,2,4,0,1,3,2};
    int n=8;
    int *left=new int[n];
    int *right=new int[n];
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],a[i]);
    }

    for(int i=n-1;i>=0;i--)
    {
        right[i]=max(right[i+1],a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(min(left[i],right[i])-a[i]);
    }
cout<<ans;
}