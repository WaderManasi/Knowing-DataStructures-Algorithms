//Given a sorted array and an integer element. The task is to check if the element is present in the array or not.
//solution: 

#include<bits/stdc++.h>
using namespace std;

int searchInSorted(int arr[], int N, int K) 
{ 
    for(int i=0;i<N;i++)
    {
        if(K<arr[i])
        return -1;
        if(K==arr[i])
        return 1;
    }  
}
int main()
{
    int n,key;
    cin>>n;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    cout<<searchInSorted(arr,n,key)<<endl;
    return 0;
}