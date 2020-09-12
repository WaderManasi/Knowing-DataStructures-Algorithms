//Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
//solution: 

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    int n=size/2;
   int v[100]={0};
   int i=0;
   for(i=0;i<size;i++)
   {
       v[a[i]]++;
   }
   for(i=0;i<size;i++)
   {
       if(v[a[i]]>n)
       return a[i];
   }
   return -1;
}
int main()
{
    int n,key;
    cin>>n;
   
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<majorityElement(arr,n)<<endl;
    return 0;
}