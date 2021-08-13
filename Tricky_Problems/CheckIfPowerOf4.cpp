//Leetcode solution

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)    return false;
        if(n==1)    return true;
        int flag=0;
        while(n%4 == 0)
        {
            n=n/4;
            if(n==1)
            {
                flag=1;
                break;
            }
        }
        return flag==1?true:false;
    }
};