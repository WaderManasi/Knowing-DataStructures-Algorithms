// Given a number N find the product of all unique prime factors of that number.

class Solution
{
public:
    long long int primeProduct(int N)
    {
        long long int product = 1;
        for (int i = 2; i <= N; i++)
        {
            if (N % i == 0)
            {
                if (isPrime(i))
                {
                    product *= i;
                }
            }
        }
        return product;
    }
    int isPrime(int no)
    {
        if (no == 2)
            return 1;
        if (no % 2 == 0 || no == 1)
            return 0;
        int flag = 0;

        for (int i = 2; i < no; i++)
        {
            if (no % i == 0)
                flag = 1;
        }
        return flag == 1 ? 0 : 1;
    }
};