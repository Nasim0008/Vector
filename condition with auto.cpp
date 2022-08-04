#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0) break;
        v.push_back(n);
    }
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    return 0;
}
