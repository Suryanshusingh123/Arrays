#include<iostream>
using namespace std;

int findunique(int a[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    cout<< ans;

}
int main()
{
    int a[100],n,ans1;
    cout<<"ener the size of the array:";
    cin>>n;
    cout<<"enter the array element:";
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
   findunique(a,n);
  
   /* for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
}