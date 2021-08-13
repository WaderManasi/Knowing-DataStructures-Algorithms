class Solution {
public:
    bool isPerfectSquare(int n) {
        for(unsigned int i=1;i*i<=n;i++)
        {
            if(n%i == 0 && (n/i)==i)
            {
                return true;
            }
        }
        return false;
    }
};