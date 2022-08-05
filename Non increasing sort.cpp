//Non increasing sort by using greater comparator

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={20,30,10,20,30,1,2,3,4,56,25,36,10,12,26};
    sort(v.begin(),v.end(),greater<int>());//greater comparator can sort the bigger first then smaller
    for(auto u:v)
    {
        cout<<u<< " ";
    }



}

