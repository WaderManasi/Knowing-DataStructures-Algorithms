#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n, int key)
{
    int s=0, e=0, mid=0;
    mid=n/2;

    if(arr[mid]==key)
    return n/2;
    else if(key < arr[mid]){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    // element not found
    if(s>e)
    return -1;
}
int main()
{
    int arr[] = {2,4,6,9,11,12,14,20,36,48};
    int target;
    cin>>target;
    cout<<"Element found at position: "<<binarySearch(arr, 10,target);
    
    return 0;
}