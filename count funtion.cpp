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
    cout<< "Which value you want to count: ";
    int value;
    cin>>value;
    cout<< value<< " appears "<< count((v.begin()),v.end(),value)<< "times"<<endl;
}
