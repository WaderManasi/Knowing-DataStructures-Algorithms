// You are given an array arr[], you have to re-construct an array arr[].
// The values in arr[] are obtained by doing OR(bitwise or) of consecutive elements in the array.


//Solution:
int* game_with_number(int arr[], int n)
{
    
   for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i] | arr[i+1];
    }
    return arr;
}