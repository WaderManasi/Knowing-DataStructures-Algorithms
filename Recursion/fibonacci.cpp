//You are given a number n. You need to find nth Fibonacci number.
//F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1

//User function Template for C++
long long int sum=0;
//Complete this function
long long fibonacci(int n)
{
    if(n<=1)    return n;
    return fibonacci(n-1)+fibonacci(n-2);