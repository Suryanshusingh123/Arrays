#include<iostream>
using namespace std;

void reverse(int a[],int n)
{   
    int start=0, end=n-1;
    while(start<=end)
    {
    swap(a[start],a[end]);
    start++;
    end--;
    
    }

}

int printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()
{
    int a[100],n;
    cout<<"enter the no. of elements:";
    cin>>n;
    cout<<"enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 reverse(a,n);
 printarray(a,n);
 return 0;
}