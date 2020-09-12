//Given an integer array and another integer element.
//The task is to find if the given element is present in array or not.
//solution: 

#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int N, int X)
{
   for(int i=0;i<N;i++)
   {
       if(arr[i]==X)
       return i;
   }
   return -1;
}
int main()
{
    int n,key;
    cin>>n;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<search(arr,n,key)<<endl;
    return 0;
}