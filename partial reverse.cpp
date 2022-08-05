//partial reverse of vector by using reverse function

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={20,30,10,20,30,1,2,3,4,56,25,36,10,12,26};
    reverse(v.begin()+2,v.end()-3);// those function can reverse from begin to end;
    for(auto u:v)
    {
        cout<<u<< " ";
    }



}



