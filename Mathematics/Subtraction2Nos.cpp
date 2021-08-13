class Solution {
    public:
    int repeatedSubtraction(int A,int B){
        int ct=0;
        if(A==B)
            return 1;
        
        while(A!=0 && B!=0)
        {
            if(A>B)
                A=A-B;
            else
                B=B-A;
            ct++;
        } 
        return ct;
    }
};