class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(!count(nums.begin(),nums.end(),target))  return -1;
        if(n==1){
            return nums[0]==target?0:-1;
        }
        if(n==2){
            if(nums[0]==target) return 0;
            return (nums[1]==target)?1:-1;
        }
        int pivot = getPivot(nums,n);
        //cout<<pivot<<"* ";
        int ans = binarySearch(nums,0,pivot,target);
        //cout<<ans<<"s ";
        if(ans == -1 && pivot!=n-1)   ans=binarySearch(nums,pivot+1,n-1,target);
        return ans;
        //return 0;
    }
    int getPivot(vector<int>& nums, int n){
        int mid=0,s=0,e=n-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(mid<e && nums[mid]>nums[mid+1])   return mid;
            if(mid>s && nums[mid]<nums[mid-1])   return mid-1;
            if(nums[s]>=nums[mid]){ //case 3 start>=mid
                e=mid-1;
            }
            else //case 4
            {
                s=mid+1;
            }
        }
        return -1;
    }
    int binarySearch(vector<int>& nums, int s,int e,int target){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)   return mid;
            else if(target>nums[mid])  s=mid+1;
            else    e=mid-1;
        }
        return -1;
    }
};