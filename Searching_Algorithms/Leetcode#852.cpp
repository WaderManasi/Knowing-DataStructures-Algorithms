class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int mid=0,s=0,e=n-1,flag=0;
        while(s<e){
            mid=s+(e-s)/2;
        if(arr[mid]>arr[mid+1])
        {
            //here there may lie the ans;
            e=mid;
        }
        else //ascending part
        {
            s=mid+1;
        }
        }
        return s; //or return e
    }
};