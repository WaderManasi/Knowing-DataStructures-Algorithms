//You are given a string s. You need to find the missing characters in the string to make a panagram.
//Note: The output characters will be lowercase and lexicographically sorted. 
//solution:

#include<string>
#include<bits/stdc++.h>
using namespace std;

string missingPanagram(string str){

    transform(str.begin(),str.end(),str.begin(),::tolower);
    int count[26]={0};
    string s="";
    for(int i=0;i<str.length();i++)
        count[str[i]-'a']++;
        int j=0;
    for(int i=0;i<26;i++)
    {
        
        if(count[i]==0)
        {
            char ch=(char)(i+'a');
            s.push_back(ch);
        }
    }
    return s;
}
int main()
{
    string str;
    cin.ignore();
    getline(cin,str);
    
    cout<<missingPanagram(str)<<endl;
    return 0;
}