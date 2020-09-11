//solution: palindrome check
//In c++ string is mutable

//Auxilary space and time: theta(n)
#include<string>
#include<bits/stdc++.h>
using namespace std;

       
bool checkPalin(string &str)
{
    string rev=str;
    reverse(rev.begin(),rev.end());
    return rev==str?true:false;
}

int main()
{
    string str;
    getline(cin,str);
    
    //Naives method
    if(checkPalin(str))
         cout<<"\nString is palindrome\n";
    else
        cout<<"\nNot a palindrome\n";

    return 0;
}