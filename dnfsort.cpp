#include<iostream>
using namespace std;


void swap(int a[],int i,int j)
{
    int c=a[i];
    a[i]=a[j];
    a[j]=c;
}
void dnfsort(int a[],int n)
{
    int low=0;
    int mid=0;int high=n-1;

    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a,low,mid);
            low++;
            mid++;

        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else{
            swap(a,mid,high);
            high--;
        }
    }
}

int main()
{
    int a[]={1,1,2,0,0,1,2,2,1,0};
    int n=10;
    dnfsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    
}