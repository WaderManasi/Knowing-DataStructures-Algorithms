class Solution
{
public:
    int setKthBit(int N, int K)
    {
        int oneShift = 1<<K;
        return N | oneShift;
    }
    
};

