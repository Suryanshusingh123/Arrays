#include<iostream>
using namespace std;

void bubblesort(int a[],int n)
{    
    int c;
    for(int i=0;i<n-1;i++)
    {
        cout<<"working on pass no.:"<<i+1<<endl;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
}
void bubblesortadaptive(int a[],int n)
{    
    int c;
    int issorted=0;
    for(int i=0;i<n-1;i++)
    {
        cout<<"working on pass no.:"<<i+1<<endl;
        issorted=1;
        for(int j=0;j<n-1-i;j++)
        {      
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
                issorted=0;
            }
        }
        if(issorted)
        {
            return;
        }
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
  //  bubblesort(a,size);
    bubblesortadaptive(a,size);
    printarray(a,size);
}