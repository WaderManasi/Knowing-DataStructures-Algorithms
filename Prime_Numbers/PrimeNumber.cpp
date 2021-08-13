//optimized solution to find prime number
public class solution{
public:
    int isPrime(int no){
        if (no == 2)
            return 1;
        if (no % 2 == 0 || no == 1)
            return 0;

        for (int i = 2; i <= sqrt(no); i++)
        {
            if (no % i == 0)
               return 0;
        }
        return 1;
    
    }
};