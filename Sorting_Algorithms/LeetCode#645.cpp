//https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        int i=0;
        while(i<nums.size()){
            int corr=nums[i]-1;
            if(nums[i]!=nums[corr]){
                swap(nums[i],nums[corr]);
            }else{
                i++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=(i+1)){
                v.push_back(nums[i]);
                v.push_back(i+1);
            }
        }
        return v;
    }
};
