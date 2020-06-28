#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<int> reverseVector(vector<int>v)
{
    reverse(v.begin(),v.end());
    return v;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }

    v=reverseVector(v); //reverse the vector elements
    for(auto x:v)
        cout<<x<<" ";   //print reversed vector elements
}