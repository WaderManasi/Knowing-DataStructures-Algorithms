//Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.

int countOnes(int arr[], int N)
{
    int ct=0;
    for(int i=0;i<N;i++)
    {
        
        if(arr[i]==1)
        ct++;
    }
    return ct;
    
}