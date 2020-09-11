//You are given a string s. You need to count the total distinct vowels in the string. 
//The string s contains lowercase letters only.
//solution: 

#include<string>
#include<bits/stdc++.h>
using namespace std;

int countVowels(string str){
    
  int ct=0;
  set<char>v;
  for(int i=0;i<str.length();i++)
  {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
          v.insert(str[i]);
      }
  }
  return v.size();   
}
int main()
{
    string str;
    cin.ignore();
    getline(cin,str);
    
    cout<<countVowels(str)<<endl;
    return 0;
}