

// find the value by using at() function
// at(position) function give the value of this position in the vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
   for(int i=0;i<n;i++)
   {
       cout<<v.at(i)<< " ";

   }

   //print the value of index no 2;
}

