#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


vector<int> sortVector(vector<int>v)
{
    sort(v.begin(),v.end());
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
    v=sortVector(v);     //sort vector and store in v4
    for(auto x:v)
        cout<<x<<" ";   //print sorted vector elements
}