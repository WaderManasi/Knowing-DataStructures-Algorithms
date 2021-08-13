// Given a number as string(n) , 
// find the remainder of the number whe it is divided by 7

//Solution
int remainderWith7(string n)
{
    int x=0;
    for(int i=0;i<n.length();i++)
    {
        cout<<n[i]-'0'<<"* ";
        x=(x*10)+(n[i]-'0');
        cout<<x<<"f ";
        x=x%7;
        cout<<x<<"mod ";
    }
    return x;
}