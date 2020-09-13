//ref: https://practice.geeksforgeeks.org/problems/minimum-indexed-character-1587115620/1/
//Given a string str and another string patt. Find the character in patt that is present at the minimum index in str. If no character of patt is present in str then print ‘No character present’.

//solution
int minIndexChar(string str, string patt)
{
    int i=0;
    int s=str.length();
    int p=patt.length();
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<p;j++)
        {
            if(str[i]==patt[j])
            return i;
        }
    }
    return -1;
}