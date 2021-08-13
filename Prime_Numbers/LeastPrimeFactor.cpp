// Given a number N, find least prime factors for all numbers from 1 to N.  The least prime factor of an integer N is the smallest prime number that divides it.
// Note : The least prime factor of all even numbers is 2. A prime number is its own least prime factor (as well as its own greatest prime factor).1 needs to be printed for 1

//Solution:
class Solution {
  public:
   bool isPrime(int n)
   {
       if(n==2) return true;
       if(n%2==0 || n==1)   return false;
       for(int i=2;i<n;i++)
       {
           if(n%i == 0)
            return false;
       }
       return true;
   }
    vector<int> leastPrimeFactor(int n) {
        vector<int>v,b;
        if(n>=1)    v.emplace_back(1);
        if(n>=2)    v.emplace_back(2);
        if(n>=3)    v.emplace_back(3);
        if(n>=4)    v.emplace_back(2);
        if(n>=5)
        {
            for(int i=5;i<=n;i++)
            {
                int j=2;
                while(i%j!=0)
                {
                    j++;
                }
                if(isPrime(j))
                    v.emplace_back(j);
            }
        }
        for(int i=v.size();i>=0;i--)
        {
            v[i]=v[i-1];
        }
        return v;
    }
};

/////ref: gfg