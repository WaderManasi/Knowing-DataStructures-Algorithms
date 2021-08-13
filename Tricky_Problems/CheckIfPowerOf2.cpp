//Leetcode solutions

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)    return false;
        if(n==1)    return true;
        return (ceil(log2(n))==floor(log2(n)));
    //     if (n == 0) 
    //     return 0; 
    // while (n != 1) 
    // { 
    //     if (n%2 != 0) 
    //         return 0; 
    //     n = n/2; 
    // } 
    // return 1; 
    // }
};