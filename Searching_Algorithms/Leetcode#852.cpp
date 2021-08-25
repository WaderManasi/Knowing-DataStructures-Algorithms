class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mid=0, s=0, e=nums.size()-1;
        while(s<e){
            mid=s+(e-s)/2;
            if(nums[mid]>nums[mid+1])   e=mid;
            else    s=mid+1;
        }
        return s;
};

//Peak Index (sub 1095)