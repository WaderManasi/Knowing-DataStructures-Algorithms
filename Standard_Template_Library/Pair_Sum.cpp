/*
You are given a vector V of size n. The vector hold pair of integers. 
Example V={(1,2),(3,4)...}. Now, you need to sum the second elements.
*/

#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
using namespace std;

void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    for(long int i=0;i<v.size();i++)
    {
        sum=sum+v[i].second;
    }
    cout<<sum;
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
   sum(v);  
   return 0;
}