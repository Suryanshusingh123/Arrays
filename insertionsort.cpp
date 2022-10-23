#include<iostream>
using namespace std;


void insertionsort(int a[],int n)
{
    int key,j;
    for(int i=1;i<=n-1;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}
int main()
{
    int a[]={2,6,5,9,7,34,67};
    int size=7;
    printarray(a,size);
    cout<<endl;
    insertionsort(a,size);
    printarray(a,size);
}