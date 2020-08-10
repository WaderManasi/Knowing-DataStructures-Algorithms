///You are given two numbers a and b. You need to find the sum of a and b under modulo M (M = 109+7)

int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    return ((a%M + b%M)%M);
}