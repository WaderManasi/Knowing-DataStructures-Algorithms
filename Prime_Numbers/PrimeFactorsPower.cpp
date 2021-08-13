// Print all prime factors and their powers separated by spaces.  The output should be printed in increasing order of prime factors.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==2)    return true;
    if(n%2==0)  return false;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    
	    for(int i=2;i<=n;i++)
	    {
	        int ct=0;
	        if(n%i == 0)
	        {
	            if(isPrime(i))
	            {
	               while(n%i == 0)
	               {
	                   n=n/i;
	                   ct++;
	               }
	               v.push_back(i);
	               v.push_back(ct);
	            }
	        }
	    }
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<"\n";
	}
	return 0;
}