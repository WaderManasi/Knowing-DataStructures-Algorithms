//using recursion :efficient approach

bool isPalin(int N)
{
    string s=to_string(N);
    if(s.length()<=1)   return true;        //single charac
    if(s[0]!=s[s.length()-1])   return false;   //last letter no same
    return isPalin(atoi(s.substr(1, s.length()-2).c_str()));
}