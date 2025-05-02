#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n),copy_v(n);
    for(auto &u:v)
    {
        cin>>u;
    }

    copy(v.begin(),v.end(),copy_v.begin()); // with copy function

    vector<int>a(v.begin(),v.end()); // without copy function

    for(auto u:copy_v)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    for(auto u:a)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}