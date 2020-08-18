//To get the position of first set bit
//solution:

int res=0;
    while(n!=0)
    {
        res++;
        if(n&1==1){
        break;
    }
        n=n>>1;
}
return res; 