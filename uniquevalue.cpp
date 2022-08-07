//find the unique value of the vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,2,3,1,4,5,6,9,8,7,7,8,4,6,3};
    sort(v.begin(),v.end());
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    int sz=unique(v.begin(),v.end())- v.begin();//unique value
    for(int i=0;i<sz;i++)
    {
        cout<<v[i]<< " ";
    }

    return 0;
}

