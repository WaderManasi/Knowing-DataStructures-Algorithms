class GfG{
    public void count(long n){
        int setb=0;
        int nonsetb=0;
        while(n>0)
        {
            if((n&1)==0)
            nonsetb++;
            else
            setb++;
            n=n>>1;
        }
        System.out.println(setb+" "+nonsetb);
    }
}