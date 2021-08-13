// Given an integer n, your task is to complete the function convertToRoman which prints the corresponding roman number of n.
// Various symbols and their values are given below.

//Solution:
string convertToRoman(int n) 
{
    int roman[18]={1000,900,500,400,100,90,50,40,10,9,8,7,6,5,4,3,2,1};
    string ans[18]={"M","CM","D","CD","C","XC","L","XL","X","IX","VIII","VII","VI","V","IV","III","II","I"};
    int i=0;
    string s="";    //empty string
    while(n>0 && i<18)
    {
        if(n-roman[i]>=0)
        {
            n=n-roman[i];
            s=s+ans[i];
        }
        else
            i++;
    }
    return s;
}