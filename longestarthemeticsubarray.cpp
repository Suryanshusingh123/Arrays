#include<iostream>
using namespace std;


int main ()
{
    int n;
    cout<<"enter the size:";
    cin>>n;
    int a[n];
    cout<<"enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=2;
    int pd=a[1]-a[0];
    int curr=2;
    for(int i=0;i<n;i++)
    {
        if(pd==a[i]-a[i-1])
        {
            curr++;
        }
        else{
            pd=a[i]-a[i-1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<"ans is:"<<ans;
}