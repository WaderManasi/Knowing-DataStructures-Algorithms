//solution: palindrome check
//In c++ string is mutable
//Efficient method
//Auxilary space and time: O(1) :best case
//                          O(n) :worst case
#include<string>
#include<bits/stdc++.h>
using namespace std;

       
bool checkPalin(string &str)
{
    int beg=0,end=str.length()-1;
    while(beg<end)
    {
        if(str[beg]!=str[end])
        return false;
        beg++;
        end--;
    }
    return true;
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