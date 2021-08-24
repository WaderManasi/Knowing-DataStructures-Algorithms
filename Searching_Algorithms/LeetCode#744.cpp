//https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int mid=0,s=0,e=letters.size()-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(target<letters[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return letters[s%letters.size()];
    }
};