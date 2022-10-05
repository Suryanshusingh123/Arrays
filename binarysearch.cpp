#include<iostream>
using namespace std;
//used only for sorted array 
int binarysearch(int a[],int size,int element)
{
   int low ,mid,high;
   low=0;
   high=size-1;
  // mid=(low+high)/2;
   while(low<=high)
   {    mid=(low+high)/2;
       if(a[mid]==element)
       {
           return mid;
       }
       if(a[mid]<element)
       {
           low=mid+1;
       }
       else{
           high=mid-1;
       }
   }
   return -1;
}
int main()
{
    int i,n,max=100,a[max],element;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"enter the array:";
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to be searhed:";
    cin>>element;
    int result= binarysearch(a,n,element);
    cout<<"element was found at:"<<result;


}