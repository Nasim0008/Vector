#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the vector size :";
    cin>>n;
    cout<< "Enter the value of the vector : ";
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }
    vector<int>:: iterator it;
    int searchvalue;
    cout<< "Enter the value which you want to search: ";
    cin>>searchvalue;
    it = find(v.begin(),v.end(),searchvalue);

    if(it!=v.end())
    {
        int index = it-v.begin();
        cout<<*it<<" has "<<index+1<<" position and "<< index<<" index"<<endl;
    }
    else
    {
        cout<< "Not found"<<endl;
    }

}

