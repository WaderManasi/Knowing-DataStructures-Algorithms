//Find left most repaeting character
//solution: 
//efficient approach:-2 require single traversing time O(n+constant)

#include<string>
#include<bits/stdc++.h>
using namespace std;

int leftRepeat(string s)
{
    bool visited[256];
    fill(visited,visited+256,false);
    int res=-1;
    //here, traversing from right most in the string
    
}
int main()
{
    string str;
    cin.ignore();
    getline(cin,str);
    cout<<leftRepeat(str)<<endl;
    return 0;
}