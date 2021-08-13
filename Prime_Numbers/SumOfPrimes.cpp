// Your task is to calculate sum  of primes present as digits of given number N.

class Solution{
public:
    int isPrime(int no)
    {
        if(no==2)
            return 1;
            
        if(no%2==0 || no==1)
            return 0;
        
        int flag=0;
        for(int i=2;i<no;i++)
        {
            if(no%i == 0)
            flag=1;
        }
        return flag==1?0:1;
    }
    int primeSum(int N){
        int sum=0;
        while(N>0)
        {
            int p=N%10;
            if(isPrime(p))
            {
             sum+=p;
            }
            N=N/10;
        }
        return sum;
    }
};