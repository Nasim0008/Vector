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
    vector<int>v;
   
    for(int i=0;i<n;i++)
    {
         bool flag = true;
        int j;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            v.push_back(arr[i]);
        }
    }
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<< endl;
}