//Find total number of Squares in a N*N cheesboard.

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	   int n;
	   cin>>n;
	   lli sum = 0;
	   while(n>0)
	   {
	       sum = sum + (n*n);
	       n--;
	   }
	   cout<<sum<<"\n";
	   t--;
	}
	return 0;
}
