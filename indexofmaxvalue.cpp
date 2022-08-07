
//find the index of the max value by using max_element function




#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5,6,9,8,7};
    vector<int>::iterator mx;
    int index=max_element(v.begin(),v.end())-v.begin();//index of the max value
    cout<<index<<endl;

    return 0;
}


