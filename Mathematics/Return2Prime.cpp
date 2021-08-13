// Given an even number N 
// (greater than 2), return two prime numbers whose sum will be equal to given number. There are several combinations possible. Print only the pair whose minimum value is the smallest among all the minimum values of pairs.
class Solution{
public:
    bool isPrime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    vector<int> primeDivision(int N){
        vector<int>v;
        for(int i=2;i<=N;i++)
        {
            if(isPrime(i))
            {
                if(isPrime(N-i))
                {
                    v.emplace_back(i);
                    v.emplace_back(N-i);
                    break;
                }
            }
        }
        return v;
    }
};