// Given 2 sorted arrays Ar1 and Ar2 of size N each. 
// Merge the given arrays and find the sum of the two middle elements of the merged array.

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                v.emplace_back(ar1[i]);
                v.emplace_back(ar2[i]);
            }
            sort(v.begin(),v.end());
            int mid = v.size()/2;
            return v[mid-1]+v[mid];
    }
};