//Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 
//solution:
bool arraySortedOrNot(int arr[], int n) {
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]) flag=1;
    }
    return flag==1?false:true;
}