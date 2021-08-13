// The first of input contains an integer T, then T test cases follow. Each test case contains an integer n i.e. numbers of integers he placed on the board and the second line of each test case contains the array a[] which represents the numbers, he successfully picked up from the floor. 

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=1;i<=n;i++)
	    {
	        if(count(arr,arr+n,i) == 0)
	            {
	                cout<<i<<"\n";
	                break;
	            }
	    }
	}
	return 0;
}