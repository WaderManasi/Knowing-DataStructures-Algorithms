//For a given number N check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.

bool isPrime(int N)
{
   int x=pow(N,0.5);
    while(x>1)
    {
        if(N%x==0)
        return false;
        x--;
    }
    return true;
}