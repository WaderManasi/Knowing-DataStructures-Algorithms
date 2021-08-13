// Given a number N. Check whether it is a magic number or not.
// Note:- A number is said to be a magic number, if the sum of its digits are calculated till a single digit recursively by adding the sum of the digits after every addition and the single digit comes out to be 1.

// Solution:
class Solution {
  public:
    int getsum(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int isMagic(int N) {
        int sum=getsum(N);//6
        while(N>0){
           if(sum == 1)
            return 1;
            sum=getsum(sum); 
            N=N/10;
        }
       return 0;
    }
};
