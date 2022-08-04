//print all the vector elements by using for each loop

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={10,20,30,40,50,60};//vector declare and initialize
    for(int u:v)//for each loop// u is a variable and only one value of v vector is keeping inside the u and print that value that happen again and again
    {
        cout<<u<< " ";//print the value one by one
    }

    return 0;
}
