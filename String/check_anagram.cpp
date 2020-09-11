//solution: anagram check
//In c++ string is mutable
                         
#include<string>
#include<bits/stdc++.h>
using namespace std;
  
bool checkAnagram(string &str1, string &str2)
{
    if(str1.length()!=str2.length())
        return false;
    sort(str1.begin(),str2.end());
    sort(str2.begin(),str2.end());
    
    return str1==str2?true:false;
}

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    cout<<str1;
    cout<<str2;
    //Naives method
    if(checkAnagram(str1,str2))
         cout<<"\nString is anagram\n";
    else
        cout<<"\nNot anagram\n";

    return 0;
}