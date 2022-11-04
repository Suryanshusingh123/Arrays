#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)//loop for starting points
    {
        for(int j=i;j<n;j++)//loop for end point
        {
            for(int k=i;k<=j;k++)//loop for printing
            {
                cout<<a[k]<<" ";
            }cout<<endl;
        }
    }
}
