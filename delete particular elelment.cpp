
//delete any particular elements of the vector

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={20,30,10,20,30};
    cout<<*v.begin()<<endl;//print the first element
    v.erase(v.begin()+1);//delete any particular element from beging
    //v.erase(v.end()-1); delete any particular element from ending
    for(auto u:v)
    {
        cout<<u<< " ";
    }


    return 0;
}





