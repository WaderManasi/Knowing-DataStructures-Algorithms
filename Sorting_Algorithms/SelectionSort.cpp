/******************************************************************************

Selection sort
(unstable sort) (worst case == best case 0(N^2) complexity)

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// get index of maximum element
int getMaxIndex(int arr[],int s,int e){
    int max=s;
    for(int i=s+1;i<=e;i++){
        if(arr[max]<arr[i]) max=i;
    }
    return max;
}

// apply selection sort
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int last = n-i-1;
        int max = getMaxIndex(arr,0,last);
        swap(arr[max],arr[last]);
    }
    
    //array after sorting
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[] = {1,5,2,4,3};
    selectionSort(arr,5);
    return 0;
}

