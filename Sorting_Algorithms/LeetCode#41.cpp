//https://leetcode.com/problems/first-missing-positive/

#include<bits/stdc++.h>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            //signed int c = ;
            if(nums[i]>0 && nums[i]<=nums.size() && nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }else{
                i++;
            }
        }
        int ans=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]-1)!=i)
            {
                ans=i;
                break;
            }
        }
        return ans+1;
    }
};
