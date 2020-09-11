//solution: to count no. of frequency of occurences of letter in a string

#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name="geeksforgeeks";
    char freq[26]={0};
    //to store freq

    for(int i=0;i<name.length();i++)
    {
        freq[name[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]>0)
        {
            cout<<(char)(i+'a')<<": "<<(int)freq[i]<<endl;
        }
    }
    cout<<endl;
}