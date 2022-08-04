//sort the elements of the vector by using sort function

#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int>v={10,20,4,5,3,1,1,8,6};
   sort(v.begin(),v.end());//sort the values at non decreasing order
   for(auto u:v)
   {
       cout<<u<< " ";
   }

   return 0;

}
