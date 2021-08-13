// Given a positive integer N, print count of set bits in it. 

int setBits(int N) {
        int ct=0;
        while(N>0)
        {
            if(N%2 == 1)
            ct++;
            N=N/2;
        }
        return ct;
    }