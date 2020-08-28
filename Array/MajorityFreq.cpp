//You are given an array arr[] of size N.
//You are also given two elements x and y. Now, you need to tell which element (x or y) appears most in the array.
//In other words, return the element, x or y, that has higher frequency in the array.
//If both elements have the same frequency, then just return the smaller element.

//NOTE :  We need to return the elements, not their counts.

int majorityWins(int arr[], int n, int x,int y)
{
    int count_x=0;//counter to count frequency of x
    int count_y=0;//counter to count frequency of y
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        count_x++;
        if(arr[i]==y)
        count_y++;
    }
    
    if(count_x>count_y)
    return x;
    else if(count_y>count_x)
    return y;
    else
    return x<y?x:y;
   
}