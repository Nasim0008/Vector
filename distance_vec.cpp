#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
   vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cout << distance(v.begin()+i, v.end()) << " ";
        cout << distance(v.end(),v.begin()+i) << endl;
    }
}