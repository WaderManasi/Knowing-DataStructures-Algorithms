//You are given an array arr of size n. 
//You need to print the array elements from start to end using given recursive function.
//User function Template for C++

void printArrayRecursively(int arr[],int n)
{
    if(n==0) return ;
   printArrayRecursively(arr,n-1);
   cout<<arr[n-1]<<" ";
}
