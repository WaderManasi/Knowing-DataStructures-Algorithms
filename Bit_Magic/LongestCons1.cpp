class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int ans=0;
        int maxx=0;
        while(N)
        {
            if((N&1)==0)
            ans=0;
            else
            ans++;
            maxx = max(maxx,ans);
            N=N>>1;
        }
        return maxx;
    }
};