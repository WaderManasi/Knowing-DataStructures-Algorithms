//Solution:

class Solution {
  public:
    int isAmicable(int A , int B) {
        if(A==B)    return 0;
        int sum1=1,sum2=1;
        for(int i=2;i<A;i++)
        {
            if(A%i == 0)
                sum1+=i;
        }
        for(int i=2;i<B;i++)
        {
            if(B%i == 0)
                sum2+=i;
        }
        if(sum1==B && sum2==A)
            return 1;
        return 0;
    }
};