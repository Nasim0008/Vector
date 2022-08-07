
//find the partial min value by using iterator


#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5,6,9,8,7};
    vector<int>::iterator mn=min_element(v.begin()+2,v.end()-4);
    cout<<*mn<<endl;

    return 0;
}


