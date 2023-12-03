#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.insert(v.begin(),a);
    }
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}