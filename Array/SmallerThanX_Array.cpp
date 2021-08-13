//Given an unsorted array arr[] of size N containing non-negative integers. You will also be given an integer X, the task is to count the number of elements which are strictly smaller than X.
// The given integer may or not be present in the array given.

int smallerThanX(int arr[],int n,int x)
{
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<x)
        ct++;
    }    
    return ct;
}
