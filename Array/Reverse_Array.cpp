//Given an array arr of size n. You need to reverse the array.
//Complete this function

int reverseArray(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    swap(arr[i],arr[n-i-1]);
}