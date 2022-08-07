
//find the partial max value by using iterator


#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5,6,9,8,7};
    vector<int>::iterator mx=max_element(v.begin()+2,v.end()-4);
    cout<<*mx<<endl;

    return 0;
}

