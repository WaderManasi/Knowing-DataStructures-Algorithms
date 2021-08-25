//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //initiall vector
        vector<int>v={-1,-1};
        
        //brute force: start from 0th index with one ptr, n from end-1 index with another ptr
        
        //efficient approach
        
        v[0]=getElement(nums,target,true); //search in first half
        
        // if target element is present
        if(v[0]!=-1)    
            v[1]=getElement(nums,target,false); //search in second half
        
        return v;
    }
    int getElement(vector<int>& nums, int target, bool isStartIndex){
        int mid=0, ans=-1, s=0, e=nums.size()-1;
        while(s<=e){    
            mid=s+(e-s)/2;
            if(target<nums[mid]){
                e=mid-1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{ //target == arr[mid]
                ans=mid;
                if(isStartIndex){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
        }
        return ans;
    }
    
};