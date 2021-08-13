// Given a string str. The task is to find the maximum occurring character in the string str.
// If more than one character occurs the maximum number of time then print the lexicographically smaller character.

//Solution:
char getMaxOccuringChar(char* str)
{
   int m=0;
   int count[26]={0};
   for(int i=0;str[i]!='\0';i++)
   {
       count[str[i]-'a']++;
       m=max(m,count[str[i]-'a']);
       
   }
   for(int i=0;i<26;i++)
   {
        if(count[i]==m)
        return 'a'+i;
   }
}
