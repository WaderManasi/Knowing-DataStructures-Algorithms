#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    vector<int>::reverse_iterator it;
        for(it = it1; it != it2; it++)
        cout<< *it <<" ";
        cout<<endl;
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
    iter(v.rbegin(),v.rend());
    return 0;
}