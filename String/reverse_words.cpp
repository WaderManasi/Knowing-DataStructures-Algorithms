//Given a String S, reverse the string without reversing its individual words. Words are separated by dots.
//solution: 

#include<string>
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) 
{ 
    stack<char>st;
    string news="";
    int i=s.length()-1;
    while(i>=0){
        if(s[i]!='.')
        {
            st.push(s[i]);
        }
        else {
       while(!st.empty())
            {
                char ch=st.top();
                news.push_back(ch);
                st.pop();
            }
            news.push_back('.');
        }
        i--;
    }
    while(!st.empty())
            {
                char ch=st.top();
                news.push_back(ch);
                st.pop();
            }
    return news;
} 
int main()
{
    string str;
    cin>>str;
    
    cout<<reverseWords(str)<<endl;
    return 0;
}