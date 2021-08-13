// Given the maximum possible area of the right angle triangle for a fixed length of hypotenuse. The task is to find the length of hypotenuse.
// Note: If the answer comes in Decimal, find it's Floor value.

class Solution {
  public:
    int getHypotenuse(long long N) {
        /*
        Area = 1/2*(b*h);
        Area = 1/2*(b^2)
        2*Area = b^2
        
        */
        
        return floor(sqrt(4*N));
    }
};