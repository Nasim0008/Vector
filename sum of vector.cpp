#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={10,20,30,40,60};
 int sum= accumulate(a.begin(), a.end(), 0);
 cout<<sum<<endl;

}
