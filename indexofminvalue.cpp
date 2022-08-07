
//find the index of the min value by using min_element function




#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5,6,9,8,7};
    vector<int>::iterator mn;
    int index=min_element(v.begin(),v.end())-v.begin();//index of the min value
    cout<<index<<endl;

    return 0;
}



