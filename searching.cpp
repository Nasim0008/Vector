#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int x, l, r;
    cin>>x>>l>>r;
    vector<int>v(n);
    for(auto &u:v)
    {
        cin>>u;
    }


    sort(v.begin(),v.end());

    bool flag = binary_search(v.begin(),v.end(),x);
    if(flag)
    {
        cout<< "YES"<< " ";
    }
    else
    {
        cout<< "NO"<< " ";
    }

    auto value = lower_bound(v.begin(),v.end(),l);
    cout<<*value<< " ";

    auto val = upper_bound(v.begin(),v.end(),r);
    cout<<*val<<endl;

}