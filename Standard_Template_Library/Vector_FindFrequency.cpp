#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int findFrequency(vector<int> v, int x){
    
    int freq=count(v.begin(),v.end(),x);
    return freq;
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
    int numberToFind;
    cin>>numberToFind;
    cout<<findFrequency(v,numberToFind);
    return 0;
}