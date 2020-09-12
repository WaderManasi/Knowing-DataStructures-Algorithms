//Find left most repaeting character
//solution: 
//efficient approach:-2 traversing from right

#include<string>
#include<bits/stdc++.h>
using namespace std;

int leftRepeat(string s)
{
    bool visited[256];
    fill(visited,visited+256,false);
    int res=-1;
    //here, traversing from right most in the string
    for(int i=s.length()-1;i>=0;--i)
    {
        if(visited[s[i]])
            {  
                res=i;
            } 
        else
            visited[s[i]]=true;
    }
    return res;
}
int main()
{
    string str;
    cin>>str;
    cout<<leftRepeat(str)<<endl;
    return 0;
}