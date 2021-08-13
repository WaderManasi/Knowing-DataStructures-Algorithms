/* You are required to complete this method*/
// Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
// Given an array, your task is to find the index of first Equilibrium point in the array.

// Solution:
int findEquilibrium(int arr[], int n)
{
  int right=0,left=0;
  for(int i=0;i<n;i++)
    right+=arr[i];
  for(int i=0;i<n;i++)
  {
      right=right-arr[i];
      if(right==left)
      return i;
      left=left+arr[i];
  }
  return -1;
}