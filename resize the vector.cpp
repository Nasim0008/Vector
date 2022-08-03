//resize the vector by using resize() function

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nasim ={10,52,84,1,2,36};//declaration and initialization
    nasim.resize(10);
    cout<<nasim.size()<<endl;//size=0 means empty thats means clear
    for(int i=0;i<nasim.size();i++)
    {
        cout<<nasim[i]<< " ";
    }

    return 0;
}



