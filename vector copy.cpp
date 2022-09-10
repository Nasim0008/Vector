#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n),ve;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        ve.push_back(v[i]);
    }
    for(auto u:ve)
    {
        cout<<u<< " ";
    }
}

