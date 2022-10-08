#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int a[]={5,2,6,9,4};
    int n=5;

    int minsofar=a[0];
    int maxprofit=0;

    for(int i=0;i<n;i++)
    {
        minsofar=min(a[i],minsofar);
        int profit=a[i]-minsofar;
        maxprofit=max(profit,maxprofit);
    }
    cout<<"maxprofit is:"<<maxprofit;

}