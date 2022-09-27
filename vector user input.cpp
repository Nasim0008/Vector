#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(4);
    cout<< "Enter the value of the vector : ";
    for(int& a:v)
    {
        cin>>a;
    }
    cout<< "The given value of the vector : ";
    for(auto u:v)
    {
        cout<<u<< " ";
    }
}
