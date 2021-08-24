#include<bits/stdc++.h>
using namespace std;

int ceiling(int arr[], int n,int target)
{
    int mid=0,s=0,e=n-1;
    while(s<=e)
    {
        mid = s+(e-s)/2;
        if(target<arr[mid])
        {
            e=mid-1;
        }
        else if(target>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            return arr[mid];
        }
    }
    //return value pointed by start pointer
    return arr[s];
}
int main()
{
    int arr[] = {2,3,5,9,14,16,18};
    int target;
    cin>>target;
    cout<<"Ceiling of the target element is: "<<ceiling(arr,7,target);
    return 0;
}