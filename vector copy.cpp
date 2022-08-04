// copy the vector elements from one vector to another

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nasim={12,25,36,78,96,45};
    vector<int>temp;//empty vector
    temp=nasim;//copy the elements from nasim vector

    cout<<temp.size()<<endl;
    //print the copied vector
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<< " ";
    }

   return 0;
}
