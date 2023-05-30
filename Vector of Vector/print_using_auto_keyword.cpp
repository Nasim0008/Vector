#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v{{1, 2, 3}, {5, 8, 9},{4,8,7,9,2}};
    for(auto u:v)
    {
        for(auto a:u)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
}