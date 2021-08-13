/*
Given a positive integer N.
You have to find Nth natural number after removing all the numbers containing digit 9.
*/

class Solution{
	public:
    	long long findNth(long long N)
    {
       long long ct=1,ans=0;
       while(N!=0)
       {
           ans+=(ct*(N%9));
           N=N/9;
           ct=ct*10;   
       }
       return ans;
    }
};