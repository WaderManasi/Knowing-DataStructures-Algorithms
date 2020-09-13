//Ishaan is playing with strings these days. He has found a new string. He wants to modify it as per the following rules to make it valid:

//The string should not have three consecutive same characters (Refer example for explanation).
//He can add any number of characters anywhere in the string. 
//Find the minimum number of characters which Ishaan must insert in the string to make it valid.

int modified (string a){
    int count=0;
    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]==a[i+2] && a[i]==a[i+1])
        {
            count++;
            i++;
            //reach after sequence of third
        }
    }
    return count;
}