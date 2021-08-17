// Halving the number by using binary shift operator

class Solution{
    public:
    int half(int N){
        if(N==1 || N==0)
        return N;
        else if(N%2 ==1)
        {
            return floor(N>>1);
        }
        else
        {
            return N>>1;
        }
    }
};