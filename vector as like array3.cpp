//n-size vector functionality

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;//size
    cin>>n;//take the size

    vector<int>nasim(n);//declare the vector with n size

    //take user input up to the size
    for(int i=0;i<nasim.size();i++)
    {
        cin>>nasim[i];
    }
    //print the values up to size
    for(int i=0;i<nasim.size();i++)
    {
        cout<<nasim[i]<< " ";
    }
}

