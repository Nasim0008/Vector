#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v(10);
    fill(v.begin(),v.end(),5); // fill the vector with value 5
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}