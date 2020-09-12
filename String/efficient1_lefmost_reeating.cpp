//Find left most repaeting character
//solution: 
//efficient approach: require single traversing time O(constant)

#include<string>
#include<bits/stdc++.h>
using namespace std;

int leftRepeat(string str){
    int count[256];
    int i;
    int res=INT_MAX;
    fill(count,count+256,-1);
    //initialize array with -1
    for(i=0;i<str.length();i++)
    {
        //fi = first index
        int fi=count[str[i]];
        if(fi==-1)
            count[str[i]]=i;
        else
            res = min(res,fi);
    }
    return (res==INT_MAX)?-1:res;
}
int main()
{
    string str;
    cin.ignore();
    getline(cin,str);
    
    cout<<leftRepeat(str)<<endl;
    return 0;
}