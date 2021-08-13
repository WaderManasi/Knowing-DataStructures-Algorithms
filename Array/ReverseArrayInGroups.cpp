//https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1/?track=ppc-arrays&batchId=221

//Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.


vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    int i;
    for(i=0;i<n-k;i=i+k)
    {
        reverse(mv.begin()+i,mv.begin()+i+k);
    }
    if(i!=(n-k-1))
        reverse(mv.begin()+i,mv.begin()+n);
    return mv;
}