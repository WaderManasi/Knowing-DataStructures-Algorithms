//solution: anagram check
//In c++ string is mutable
//time and space complexity: O(n+26)
                         
#include<string>
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string c, string d){
    
   if(c.length()!=d.length())
    return false;
    
    if(c.length()==1)
    {
        if(c[0]!=d[0])
        return false;
    }
   int count[26]={0};
   for(int i=0;i<c.length();i++)
   {
       count[c[i]-'a']++;
       count[d[i]-'a']--;
   }
   for(int i=0;i<26;i++)
    {
        //cout<<count[i]<<" ";
        if(count[i]!=0)
        return false;
    }
    return true;
}
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    
    //Naives method
    if(checkAnagram(str1,str2))
         cout<<"\nString is anagram\n";
    else
        cout<<"\nNot anagram\n";

    return 0;
}