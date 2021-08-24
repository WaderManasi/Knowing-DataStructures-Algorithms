//https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int mid=0,s=0,e=nums.size()-1;
        int flag=0;
        while(s<e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]>nums[mid+1])
            {
                //flag=1;
                e=mid;
                //break;
                
            }
            else
            {
                s=mid+1;
            }
        }
        return s;
    }
};