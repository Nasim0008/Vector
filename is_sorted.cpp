#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(is_sorted(v.begin(),v.end()))
    {
        cout<< "Nasim"<<endl;
    }
    else{
        cout<< "Ayesha"<<endl;
    }
}
