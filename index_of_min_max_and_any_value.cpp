
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(auto &u:v)
    {
        cin>>u;
    }

    int ind_min = min_element(v.begin(),v.end())-v.begin();
    cout<<ind_min<<endl;

    int ind_max = max_element(v.begin(),v.end())-v.begin();
    cout<<ind_max<<endl;

    int value;
    cin>>value;
    int ind_of_any_value = find(v.begin(),v.end(),value)-v.begin();
    cout<<ind_of_any_value<<endl;
}
