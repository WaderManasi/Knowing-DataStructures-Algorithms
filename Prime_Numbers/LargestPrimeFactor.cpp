// Given a number N, 
// the task is to find the largest prime factor of that number.

class Solution
{
public:
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
    long long int largestPrimeFactor(int no)
    {

        vector<long long int> v;
        for (int i = 1; i <= no; i++)
        {
            if (no % i == 0)
            {
                if (isPrime(i))
                    v.emplace_back(i);
            }
        }

        return v[v.size() - 1];
    }
};