//solution: https://practice.geeksforgeeks.org/problems/smallest-divisible-number/1/?track=ppc-mathematics&batchId=221

//Given a number n the task is to complete the function which returns an integer denoting the smallest number evenly divisible by each number from 1 to n.

long long getSmallestDivNum(long long n)
{
    long long result=1;
    for(long long int i=1;i<=n;i++)
    {
        result=(result*i)/__gcd(result,i);
    }
    return result;
}
