//2D vector functionality

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>v;//declaration
    vector<int>a1={10,20,30,40,50};
    vector<int>a2={20,30,40,80};
    v.push_back(a1);
    v.push_back(a2);
    for(auto u:v)
    {
        for(auto g:u)
        {
            cout<<g<<" ";
        }
        cout<<endl;
    }
}

