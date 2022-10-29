#include<iostream>
#include<climits>
using namespace std;


int kdane(int a[],int n)
{
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(currsum,maxsum );
    }
    return maxsum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int wrapsum;
    int nonwrapsum;
    int totalsum=0;

    nonwrapsum=kdane(a,n);
    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=totalsum+kdane(a,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
}