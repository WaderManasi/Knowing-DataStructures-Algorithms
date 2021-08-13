// Given a number N.
// Check whether it is divisible by the sum of its digits or not.

// Solution:
class Solution {
  public:
    int isDivisible(int N) {
        int sum=0;
        int n=N;
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        if(N%sum == 0) 
            return 1;
        return 0;
    }
};