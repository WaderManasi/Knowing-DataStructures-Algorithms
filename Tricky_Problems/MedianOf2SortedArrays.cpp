// Given two sorted arrays of sizes N and M respectively.
// The task is to find the median of the two arrays when they get merged.

// Solution: 
// arr : given array with size n 
// brr : given array with size m
int findMedian(int arr[], int n, int brr[], int m){
    vector<int>v;
    for(int i=0;i<n;i++)
        v.emplace_back(arr[i]);
    for(int i=0;i<m;i++)
        v.emplace_back(brr[i]);
    sort(v.begin(),v.end());
    if(v.size()%2==0)
        return (v[v.size()/2]+v[v.size()/2-1])/2;
    return v[v.size()/2];
}