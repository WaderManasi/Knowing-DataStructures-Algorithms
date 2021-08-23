#include<bits/stdc++.h>
using namespace std;

int orderAgnosticinarySearch(int arr[],int n, int key)
{
    int s=0, e=n-1, mid=0;
    //check wheather array is sorted in ascending order or descending order
    
    if(arr[0]<arr[n-1]){
        //ascending sort
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
    else if(arr[0]>arr[n-1])
    {
        //descending sort
        while(s<=e){
        mid=s+(e-s)/2;
        if(key > arr[mid]){
            e=mid-1;
                }
        else if(key < arr[mid]){
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
    else
    {
        //all array elements are equal
        if(key==arr[0])
        return 0;
        else
        return -1;
    }
}
int main()
{
    int n;    
    cin>>n;
    int arr[n];
    int target;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>target;
    cout<<"Element found at position: "<<orderAgnosticinarySearch(arr,n,target);
    
    return 0;
}