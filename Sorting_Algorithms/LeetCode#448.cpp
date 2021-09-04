#include<bits/stdc++.h>

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        int i=0;
        int n = nums.size();
        while(i<n){
          int corr = nums[i]-1;
            if(nums[corr]!=nums[i]){
                //cout<<nums[i]<<"n[i]* "<<nums[corr]<<"n[cr]* \n";
                swap(nums[i],nums[corr]);
                //cout<<nums[i]<<"n[i] "<<nums[corr]<<"n[cr] ";
            }
            else
                i++;
        }
        for(int i=0;i<n;i++)
        {
            if((nums[i]-1)!=i)
                v.push_back(i+1);
        }
        return v;
    }
};
