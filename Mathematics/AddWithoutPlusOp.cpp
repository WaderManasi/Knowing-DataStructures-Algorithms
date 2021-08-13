// Given two integers a and b.
// Find the sum of two numbers without using arithmetic operators.

class Solution
{
    public:
    int sum(int x , int y)
    {
        // if(a>b)
        // {
        //     while(b--)
        //     a++;
        //     return a;
        // }
        // else
        // {
        //     while(a--)
        //     b++;
        //     return b;   
        // }
        while (y != 0)  
    {  
        // carry now contains common  
        //set bits of x and y  
        int carry = x & y;  
  
        // Sum of bits of x and y where at  
        //least one of the bits is not set  
        x = x ^ y;  
  
        // Carry is shifted by one so that adding  
        // it to x gives the required sum  
        y = carry << 1;  
    }  
    return x;  
        
    }
};