
//vector size finding function and print all the element of the vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector declaration
    vector<int>nasim; //vector keyword<data type>vector name; (vector name can be anything);
    //vector initialization
    nasim.push_back(3);
    nasim.push_back(9);
    nasim.push_back(49);
    nasim.push_back(10);


    cout<<"Total size of the vector: "<<nasim.size()<<endl;//vector_name.size()//finding the size of vector
    //print all the elements of the vector
    for(int i=0;i<nasim.size();i++)
    {
        cout<<nasim[i]<< " ";
    }

    return 0;
}


