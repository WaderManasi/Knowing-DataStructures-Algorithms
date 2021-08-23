class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int s=0,e=a.size()-1;
        
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(a[mid]>a[mid+1] && a[mid-1]<a[mid])
            {
                return a[mid];
            }
            if(a[mid]>a[mid-1] && a[mid]<a[mid+1])
                s=mid+1;
            else
                e=mid-1;
        }
    }
};
