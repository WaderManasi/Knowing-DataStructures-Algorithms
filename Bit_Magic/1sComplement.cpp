class Solution{ 
public:
    string onesComplement(string S,int N){
        for(int i=0;i<N;i++)
        {
            if(S[i]=='1')
            S[i]='0';
            else
            S[i]='1';
        }
        return S;
    }
};
