void toBinary(int N)
{
    int bin=0,i=0;
    while(N>0)
    {
        int p = N%2;
        bin += p*pow(10,i);
        
        i++;
        N=N/2;
    }
    printf("%d",bin);
}