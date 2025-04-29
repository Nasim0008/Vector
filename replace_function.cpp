#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5, 6, 3};
    replace(v.begin(), v.end(), 3, 8);

    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}
