//solution:
                         
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
  
int freq(string str1, string str2)
{
    int i,j,count=0,count1=0;
    for (i = 0; i < str1.length();)
    {
        j = 0;
        count = 0;
        while ((str1[i] == str2[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == str2.length())
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    return count1+1;
}

int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    
    cout<<freq(str1,str2);
    return 0;
}