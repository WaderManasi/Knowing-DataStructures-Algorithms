// Given an integer N which has odd number of digits, find whether the given number is a balanced or not.
// An odd digit number is called a balanced number if the sum of all digits to the left of the middle digit and the sum of all digits to the right of the middle digit is equal.

// Solution:
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int sum1=0,sum2=0;
	    for(int i=0;i<N.length()/2;i++)
	        sum1+=N[i]-'0';
	    for(int i=(N.length()/2)+1;i<N.length();i++)
	        sum2+=N[i]-'0';
	    if(sum1==sum2)
	        return 1;
	   return 0;
	}
};
