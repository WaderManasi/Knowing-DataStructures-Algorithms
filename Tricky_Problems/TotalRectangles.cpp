//Find total number of Rectangles (excluding squares) in a N*N cheesboard.

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t>0)
	{
	    long long int num;
	    cin>>num;
	    
	    long long p = (num*(num+1)/2)*(num*(num+1)/2);
 
        long long s=0;
        while(num>0)
        {
            s= s +(num*num);
            num--;
        }
  cout<<(p-s)<<"\n";
	    t--;
	}
	return 0;
}