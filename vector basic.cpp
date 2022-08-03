
//vector declaration and initialization and print

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector declaration
    vector<int>nasim; //vector keyword<data type>vector name; (vector name can be anything);
    //vector initialization
    nasim.push_back(3);
    nasim.push_back(9);
    nasim.push_back(49);
    nasim.push_back(10);

    nasim[1]=400;

    //vector print
    cout<<nasim[1];

    return 0;
}
