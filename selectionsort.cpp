#include<iostream>
using namespace std;


void selectionsort(int a[],int n)
{    
    int indexofmin,c;
    for(int i=0;i<n-1;i++)
    {
        indexofmin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[indexofmin])
            {
                indexofmin=j;
            }
        }
        c=a[i];
        a[i]=a[indexofmin];
        a[indexofmin]=c;
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
    selectionsort(a,size);
    printarray(a,size);
}