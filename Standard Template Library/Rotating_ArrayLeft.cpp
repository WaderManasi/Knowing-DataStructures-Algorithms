#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<string> split_string(string);

// Complete the rotLeft function below.
void rotLeft(vector<int> a, int d) {

    //rotate() method to left rotate elememts.
    rotate(a.begin(),a.begin()+d,a.end());
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int val,n,rot;
    cin>>n>>rot;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    rotLeft(v,rot);
    return 0;
}