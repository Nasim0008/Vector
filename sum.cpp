#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40};
    int s=20;
    int sum=accumulate(v.begin(),v.end(),s);
    cout<<sum;
}
