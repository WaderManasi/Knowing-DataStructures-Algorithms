//Given an array arr of size n, find maximum and minimum elements in the array.
//solution

int maximumElement(int arr[],int n)
{
    return *max_element(arr,arr+n);
}

int minimumElement(int arr[],int n)
{
    return *min_element(arr,arr+n);
}