#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1={1,2,3};
    vector<int>v2={1,2,3};
    vector<int>v3(v1.size()+v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    for(auto u:v3)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}
