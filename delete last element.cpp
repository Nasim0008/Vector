//access and print the last elements of the vector

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={20,30,10,20,30};
    cout<<v.back()<<endl;//back() function use for accessing the last element of the vector
    v.pop_back();//pop_back function can delete the last element of the vector
    cout<<"Now,last element = "<<v.back();

    return 0;
}




