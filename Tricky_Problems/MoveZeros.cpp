// Given an array nums, write a function to move all 0's 
// to the end of it while maintaining the relative order of the non-zero elements.

// Solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        int ct=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)  ct++;
            else
                v.push_back(nums[i]);
        }
        while(ct--)
            v.push_back(0);
        for(int i=0;i<v.size();i++)
            nums[i]=v[i];
    }
};