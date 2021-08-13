// Hashing is very useful to keep track of the frequency of the elements in a list.
// You are given an array of integers. You need to print the non-repeated elements as they appear in the array.

//solution:
// Function to print the non repeated elements in the array
// arr[]: input array
// n: size of array
vector<int> printNonRepeated(int arr[],int n)
{
    vector<int>v;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]==1)
        v.emplace_back(arr[i]);
    }
    return v;
}