// Given a sorted array A of size N, delete all the duplicates elements from A.

//Solution:
class Solution{
public:
    int remove_duplicate(int a[],int n){
        if(n==1)    return 1;
        int i=0;
        for(int j=1;j<n;j++)
        {
            if(a[i]!=a[j])
            {
                i++;
                a[i]=a[j];
            }
        }
        return i+1;
    }
};