// Given an array arr[] of size N, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the smallest.

//Solution:
int firstRepeated(int arr[], int n) {
   for(int i=0;i<n;i++)
   {
       if(count(arr,arr+n,arr[i]) > 1)
       return i+1;
   }
   return -1;
}
