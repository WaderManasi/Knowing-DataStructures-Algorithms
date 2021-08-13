// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

// Solution:
// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    int sum=arr[0], //tillnow
        maxx=arr[0]; //curr
    for(int i=1;i<n;i++)
    {
        maxx=max(arr[i],maxx+arr[i]);
        sum=max(sum,maxx);
    }
    return sum;
}