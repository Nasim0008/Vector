#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<8;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(auto u:v)
    {
        cout<<u<<  " ";
    }
}