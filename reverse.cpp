#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int start=0,end=n-1;
    while(start<=end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    
    

}