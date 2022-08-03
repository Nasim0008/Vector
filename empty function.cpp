//By using empty function check is it empty or not
//if it is empty then the given value is 1 and otherwise 0

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nasim ={10,52,84,1,2,36};//declaration and initialization
    nasim.clear();//vector name.clear()//this function clear all the elements which is initialize before

    cout<<nasim.size()<<endl;//size=0 means empty thats means clear
    cout<<nasim.empty()<<endl;//

    return 0;
}


