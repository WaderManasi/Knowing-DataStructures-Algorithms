// Given an unsorted array of size N, use selection sort to sort arr[] in increasing order by repeatedly selecting the minimum element from unsorted subarray and putting it in the sorted subarray. 

int select(int arr[], int i)
{
    // code here such that selecionSort() sorts arr[]
    for(int x=i;x>=0;x--)
    {
        if(arr[x]>arr[i])
        i=x;
    }
    return i;
}


void selectionSort(int arr[], int n)
{
   int i, j;
   for (i = n-1; i >=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}