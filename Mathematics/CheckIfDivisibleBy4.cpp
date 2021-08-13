//Divisibilty of 4
//SOlution:
class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    int n=N.length();
	    if(n==1)
	    {
	        if(N[0]%4==0)
	        return 1;
	    }
	    else
	    {
	        int x=N[n-1]-'0';
	        int y=N[n-2]-'0';
	        if((x+y*10)%4==0)
	            return 1;
	    }
	    return 0;
	}
};