#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_set<int>s(arr,arr+n);// for the array
    //set<int>s(v.begin(),s.end());

    for(auto u:s)
    {
        cout<<u<<" ";
    }
    cout<<endl;
}