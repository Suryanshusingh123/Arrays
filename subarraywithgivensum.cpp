#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int flag=0,sum=0,start=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        while(sum>s)
        {
            sum-=a[start];
            start++;
        }
        if(sum==s)
        {       
            flag=1;
            cout<<start<<" "<<i;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"-1";
    }
    return 0;
}