/******************************************************************************

Cyclic sort
Time complexity: O(N)
Can be applied iff elements in array range from 1 to N

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void cyclicSort(int arr[],int n){
    
    // in this we need to sort array in a single pass O(n)
    
    for(int i=0;i<n;i++){
        if((arr[i]-1)!=i){
            int num = arr[i];
            swap(arr[i],arr[num-1]);
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {2,3,1,5,4};
    int n=5;
    cyclicSort(arr,n);
    return 0;
}
