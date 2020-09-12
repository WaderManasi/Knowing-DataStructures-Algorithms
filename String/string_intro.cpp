#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[]="comp";
    cout<<"\nDisplaying string: ";
    cout<<str;
    cout<<"\nSize of str: ";
    cout<<sizeof(str);          //prints size one more than original size 
  
  //to input entire string from user
    string name,fname;
    cout<<"\nEnter full name: ";
    
    getline(cin,fname);
    cout<<fname;
    
    //input entire sentence is not dispalyed
    cout<<"\nEnter full name: ";
    cin>>name;
    cout<<name;
    
    
    cout<<endl;
}