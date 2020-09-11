//Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.
//solution: 

#include<string>
#include<bits/stdc++.h>
using namespace std;
string rotl(string &s)
{
    int n=s.length()-1;
    if(n<=2)
    return s;
    rotate(s.begin(),s.begin()+2,s.end());
    return s;
}
string rotr(string &s)
{
    int n=s.length()-1;
    if(n<=2)
    return s;
    rotate(s.begin(),s.begin()+s.size()-2,s.end());
    return s;
}
bool isRotated(string str1, string str2)
{
    string strr,strl;
    string s=str2;
    
    strr=rotr(str2);
    strl=rotl(s);
    return (str1==strr) || (str1==strl))?true:false;
}
int main()
{
    string str1,str2;
    cin.ignore();
    getline(cin,str1);
    getline(cin,str2);
    
    if(isRotated(str1,str2))
    cout<<"1";
    else
    cout<<"0";
    return 0;
}