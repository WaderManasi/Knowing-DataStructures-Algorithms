class Solution{
    public:
    int bitMultiply(int N){
        int ans = 0,n=N;
        while(N)
        {
            if((N&1) == 1)
            ans++;
            N=N>>1;
        }
        return ans*n;
    }
};