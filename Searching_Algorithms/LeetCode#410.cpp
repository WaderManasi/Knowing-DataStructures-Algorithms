class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int s=*max_element(nums.begin(),nums.end());    //max element from array (m==n-1)
        int e=accumulate(nums.begin(),nums.end(),0);    //sum of all elements in array (m==0)
        
        while(s<e){
            //try for mid
            int mid=s+(e-s)/2;
            
            //calculating value of m
            int sum=0, p=1;
            for(int i:nums){
                if(sum+i>mid){
                    //cannot add this into subarray, make new one
                    sum=i;
                    p++;
                }
                else{
                    sum+=i;
                }
            }
            if(p>m){ //p<=m
                s=mid+1;
            }else{
                e=mid;
            }
        }
        return e; //s == e, return s
    }
};
