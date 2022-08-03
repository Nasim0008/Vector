//input the value from the user of n-size in vector

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;//size
    cin>>n;
    vector<int>nasim;//vector declaration
    for(int i=0;i<n;i++)
    {
        int a;//initialize i-th value
        cin>>a;//input i-th value
        nasim.push_back(a);//push_back i-th value
    }
    for(int i=0;i<n;i++)
    {
        cout<<nasim[i]<< " ";//print all the values of n-size vector
    }

    return 0;
}
