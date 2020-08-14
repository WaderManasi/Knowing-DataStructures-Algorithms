//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1/?track=ppc-arrays&batchId=221

// Function to merge two input arrays
// arr1[], arr2[]: input arrays
// n, m: size of arr1[] and arr2[] respectively

//solution
void merge(int arr1[], int arr2[], int n, int m) 
{ 
    
    int x=n-1, y = 0;
    while(x>=0 && y<m)
    { 
    if(arr1[x]> arr2[y]){
    swap(arr1[x] , arr2[y]);
    x--;
    y++;
    }
    else{
    x--;
    }
    }
    sort(arr1 , arr1+n);
    sort(arr2 , arr2+m);
} 