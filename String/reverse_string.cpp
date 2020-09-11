//You are given a string s. You need to reverse the string.
//solution: 

#include<string>
#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return rev; 
}
int main()
{
    string str;
    cin.ignore();
    getline(cin,str);
    
    cout<<reverseWord(str)<<endl;
    return 0;
}