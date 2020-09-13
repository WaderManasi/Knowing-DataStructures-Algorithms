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