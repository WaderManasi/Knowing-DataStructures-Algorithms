// Given an array A[] of size n.
// The task is to find the largest element in it.

// C function to find maximum in arr[] of size n
int largest(int arr[], int n) {
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    return max;
}