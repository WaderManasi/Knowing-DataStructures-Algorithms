// Given an integer, the task is to find factorial of the number.

//Using boost library in c++ for larger datatype
#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp=boost::multiprecision;
mp::cpp_int fact(int n)
{
    if(n<=1)    return 1;
    return n*fact(n-1);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<fact(n)<<"\n";
	}
	return 0;
}