//Given an unsorted array arr[] of size N containing non-negative integers. You will also be given an integer X, the task is to count the number of elements which are strictly greater than X.
//The given integer may or not be present in the array given.

// arr[]: input array
// n: size of the array
// x: element for which you need to return the count
int greaterThanX(int arr[],int n,int x)
{
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        ct++;
    }    
    return ct;
}