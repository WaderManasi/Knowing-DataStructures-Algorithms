//Find left most repaeting character
//solution: 
//better approach: require loops but linear time

#include<string>
#include<bits/stdc++.h>
using namespace std;

int leftRepeat(string str){
     int count[26]={1};
     for(int i=0;i<str.length();i++)
     {
        count[str[i]-'a']++;
     }
     for(int i=0;i<26;i++)
     {
         if(count[i]>1)
         {
            return i;
         }
     }
     return -1;
}
int main()
{
    string str;
    cin.ignore();
    getline(cin,str);
    
    cout<<leftRepeat(str)<<endl;
    return 0;
}