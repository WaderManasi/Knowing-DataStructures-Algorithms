// Given a natural number N, the task is to find the sum of the divisors of all the divisors of N.

//User function Template for C++
class Solution
{
public:
    int sumOfDivisors(int N)
    {
        int sum1=0,sum2=0;
        for(int i=1;i<=N;i++)
        {
            if(N%i==0)
            {
                for(int j=1;j<=i;j++)
                {
                    if(i%j==0)
                    sum2=sum2+j;
                }
            }
        }
        return sum2;
    }
};