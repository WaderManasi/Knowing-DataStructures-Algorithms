#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n, int key)
{
    int s=0, e=n-1, mid=0;
    while(s<=e){
        mid=s+(e-s)/2;
        if(key < arr[mid]){
            e=mid-1;
                }
        else if(key > arr[mid]){
            s=mid+1;
            }
            else
            {
                return mid;
            }   
    }
    // element not found
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