class Solution{
public:
    int isBitSet(int N){
        while(N)
        {
            if(N&1 == 0)
            return 0;
            N=N>>1;
        }
        return 1;
    }
};