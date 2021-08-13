//vowel count

//solution
int countVowels(string str){
  
  int v=0;
  for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u')
        v++;
    }
    return v;
}