#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{1,2,2,3,4};
    map<int,int>m;
    for(auto i:v)
    {
        m[i]++;

    }
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
}