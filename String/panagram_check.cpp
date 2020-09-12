//You are given a string s. You need to find if the string is a panagram or not.
//A panagram contains all the letters of english alphabet at least once.

#include<string>
#include<bits/stdc++.h>
using namespace std;

bool isPanagram(string str){
    int count[26]={0};
    for(int i=0;i<26;i++)
    {
        count[str[i]-'a']++;
    }
    int flag=0;
   for(int i=0;i<26;i++)
    {
        if(count[i]==0)
        flag=1;
    }
    return flag?false:true;
}
int main()
{
    string str;
    cin.ignore();
    getline(cin,str);
    
    if(isPanagram(str))
        cout<<"1";
    else
        cout<<"0";
    return 0;
}