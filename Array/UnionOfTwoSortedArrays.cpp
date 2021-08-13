
// Union of two arrays can be defined as the common and distinct elements in the two arrays.
// Given two sorted arrays of size N and M respectively, find their union.

//solution
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int>v;
    vector<int>::iterator ip;
    for(int i=0;i<n;i++)
    {
        v.emplace_back(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        v.emplace_back(arr2[i]);
    }
    sort(v.begin(),v.end());
    ip = unique(v.begin(), v.begin()+v.size());
    v.resize(distance(v.begin(), ip)); 
    return v;
}