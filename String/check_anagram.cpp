//solution: anagram check
//In c++ string is mutable
                         
#include<string>
#include<bits/stdc++.h>
using namespace std;
  
bool checkAnagram(string &str1, string &str2)
{
   
    return true;
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