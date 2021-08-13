//Divisibilty of 5
//SOlution:
class Solution{
public:	
	
	int divisibleBy5 (string N)
	{
	    int n=N.length();
	    if(n==1)
	    {
	        if(N[0]%5==0)
	        return 1;
	    }
	    else
	    {
	        int x=N[n-1]-'0';
	        if(x==0 || x==5)
	            return 1;
	    }
	    return 0;
	}
};