#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &u:arr)
    {
        cin>>u;
    }
    vector<int>v(arr,arr+3);
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}