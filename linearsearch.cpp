#include<iostream>
using namespace std;
//used for both sorted and unsortred aaray
int linearsearch(int a[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==element)
        {
            return i;
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
    int result= linearsearch(a,n,element);
    cout<<"element was found at:"<<result;


}
