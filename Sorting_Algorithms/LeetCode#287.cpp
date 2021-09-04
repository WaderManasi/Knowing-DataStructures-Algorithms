class Solution {
public:
    int findDuplicate(vector<int>& nums) {
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
        int m=0;
        for(int i=0;i<n;i++)
        {
            if((nums[i]-1)!=i)
            {
                m=nums[i];
                break;
            }
        }
        return m;
    }
};
