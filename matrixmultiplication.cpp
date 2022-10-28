#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a1[n1][n2], a2[n2][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>a1[i][j];
        }
    }

for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>a2[i][j];
        }
    }

    int a3[n1][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            a3[i][j]=0;;
        }
    }

    for(int i=0;i<n1;i++)//row of a1
    {
        for(int j=0;j<n3;j++)//column of a2
        {
           for(int k=0;k<n2;k++)//column and row of a1,a2
           {
               a3[i][j]+=a1[i][k]*a2[k][j];
           }
        }
    }

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<a3[i][j]<<" ";
        }cout<<endl;
    }
}