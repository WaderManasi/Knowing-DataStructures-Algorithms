// Given a number N.
// Find its unique prime factors in increasing order.

//solution:
class Solution{
	public:
	bool isPrime(int n)
	{
	    if(n==2)    return true;
	    if(n==1 || n%2==0)  return false;
	    for(int i=2;i<n;i++)
	    {
	        if(n%i == 0)    return false;
	    }
	    return true;
	}
	vector<int> AllPrimeFactors(int N) {
	    vector<int>v;
	    if(isPrime(N))
	    {
	        v.emplace_back(N);
	        return v;
	    }
	    for(int i=2;i<N;i++)
	    {
	        if(N%i == 0)
	        {
	            if(isPrime(i))
	            v.emplace_back(i);
	        }
	    }
	    return v;
	}
};