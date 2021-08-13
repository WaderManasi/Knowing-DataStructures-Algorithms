// Given a number N, find if it is Disarium or not. A number is called Disarium if sum of its digits powered with their respective positions is equal to the number itself.
// Output 1 if it's Disarium, and 0 if not.

// SOlution
int isDisarium(int N) {
        int i=floor(log10(N)+1);
        int n=N;
        int sum=0;
        while(n>0)
        {
            sum+=pow(n%10,i);
            i--;
            n=n/10;
        }
        if(sum==N)
            return 1;
        return 0;
    }