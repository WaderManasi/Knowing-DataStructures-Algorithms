/*
Given an array of size N-1 such that it can only contain distinct integers in the range of 1 to N. Find the missing element.
*/

//solution
int MissingNumber(vector<int>& array, int n) {
    
    sort(array.begin(),array.end());
    for(int i=1;i<=n;i++)
    {
        if(array[i-1]==i && array[i-1]<n)
        continue;
        else
        return i;
    }
}