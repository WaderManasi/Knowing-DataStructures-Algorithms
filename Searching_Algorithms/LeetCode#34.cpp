class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v={-1,-1};
        v[0]=find(nums,target, true);
        if(v[0]!=-1)
        v[1]=find(nums,target, false);
        return v;
    }
    int find(vector<int>& nums, int target, bool si)
    {
        int ans=-1;
        int n=nums.size();
        int mid=0,s=0,e=n-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(target<nums[mid])
            {
                e=mid-1;
            }
            else if(target>nums[mid])
            {
                s=mid+1;
            }
            else
            {
                ans=mid;
                if(si)
                {
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }
        }
        return ans;
    }
};