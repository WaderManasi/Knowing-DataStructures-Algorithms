//You are given a string s consisting of multiple words. 
//You need to count the total words in the string. Words are separated by a single space.
//solution: 

#include<string>
#include<bits/stdc++.h>
using namespace std;

       
int countWords(string str){
    int ct=1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        ct++;
    }
    return ct;
}
int main()
{
    string str;
    cin.ignore();
    getline(cin,str);
    
    cout<<countWords(str)<<endl;
    return 0;
}