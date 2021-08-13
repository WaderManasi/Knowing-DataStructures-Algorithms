//You are given an array arr(0-based indexing). 
//The size of the array is given by n. You need to delete an element at given index and print the modified array. The arr[i] of array is initially set to i+1.
//Deletion means you need to shift all the elements after that index to the left by 1 position and set the last element as zero.

void deleteFromArray(int arr[], int n, int index){
    
  if(index==n-1)
  {
      arr[n-1]=0;
  }
  else
  {
    int i=0;
      
    while(i!=index)
    i++;
      
    for(int j=i;j<n;j++)
    arr[j]=arr[j+1];
    
    arr[n-1]=0;
  }
}