#include<bits/stdc++.h>
using namespace std;

int value(int a, int b)
{
    return a+b;
}

int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    // for sum with initial value 0
    int sum = accumulate(v.begin(),v.end(),0);
    cout<< sum<<endl;

    // for sum with any initial value
    int a;
    cin>>a;
    int sum_2 = accumulate(v.begin(),v.end(),a);
    cout<<sum_2<<endl;

    // for sum with any initial value from the function
    int x,y;
    cin>>x>>y;
    int sum_3 = accumulate(v.begin(),v.end(),value(x,y));
    cout<<sum_3<<endl;

    // find product value of the vector
    int product = accumulate(v.begin(),v.end(),1,mul);
    cout<<product<<endl;


}
