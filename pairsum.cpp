#include<iostream>
#include<climits>
using namespace std;

bool pairsum(int a[],int n,int k)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(a[low]+a[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high]>k)
        {
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main()
{
    int a[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(a,8,k);
}