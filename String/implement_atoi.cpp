// Your task  is to implement the function atoi.
// The function takes a string(str) as argument and converts it to an integer and returns it.

//solution
int atoi(string str)
{
    int flag=1;
    if(str[0]=='-') 
    {
        string s="";
        int k=0;
        for(int i=1;i<str.length();i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            s[k]=str[i];
            k++;
        }
        else
        flag=0;
    }
    if(flag)    return stoi(s)*-1;
    return -1;
    }
    else{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=48 && str[i]<=57)
        continue;
        else
        flag=0;
    }
    if(flag)    return stoi(str);
    return -1;
    }
}