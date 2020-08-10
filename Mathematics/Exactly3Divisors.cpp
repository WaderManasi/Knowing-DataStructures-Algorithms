//equal to N have numbers of divisors exactly equal to 3.

bool isPrime(int n) {
int x=pow(n,0.5);
while(x>1){
    if(n%x==0)
    return false;
    x--;
}
return true;
}
int exactly3Divisors(int N)
{
//Your code here
int ct = 0;
for(int i=2;i*i<=N;i++)
{
    if(isPrime(i))
    ct++;
}
return ct;
}