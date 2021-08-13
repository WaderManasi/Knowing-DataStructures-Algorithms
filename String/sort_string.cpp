// Given a string of lowercase characters from ‘a’ – ‘z’. We need to write a program to print the characters of this string in sorted order.

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code  
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    sort(str.begin(),str.end());
	    cout<<str<<endl;
	}
	return 0;
}