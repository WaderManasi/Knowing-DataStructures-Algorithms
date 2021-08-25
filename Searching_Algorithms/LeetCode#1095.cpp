// https://leetcode.com/problems/find-in-mountain-array/
 /**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int peakElementIndex = getPeakElementIndex(mountainArr,n);
        int targetIndex = agnosticSearch(mountainArr,target,0,peakElementIndex);
        
        if(targetIndex==-1){
            targetIndex = agnosticSearch(mountainArr,target,peakElementIndex+1,n-1);
        }
        return targetIndex;
    }
    int getPeakElementIndex(MountainArray &mountainArr, int n){
        int mid=0, s=0, e=n-1;
        while(s<e){
            mid=s+(e-s)/2;
            if(mountainArr.get(mid)>mountainArr.get(mid+1)){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        return mid;
    }
    int agnosticSearch(MountainArray &mountainArr, int target, int s, int e){
        int mid=0,ans=-1;
        bool isAscendingArray = mountainArr.get(s) < mountainArr.get(e);
        
        while(s<=e){
            mid=s+(e-s)/2;
            if(target==mountainArr.get(mid))    return mid;
            if(isAscendingArray){
               if(target<mountainArr.get(mid)){
                   e=mid-1;
               }else{
                   s=mid+1;
               }     
            }  
            else{
                if(target>mountainArr.get(mid)){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
        }
        return -1;
    }
};