#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(10);
    iota(v.begin(),v.end(),8); // iota() assigns increasing values to a range starting from a specified value.

    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}