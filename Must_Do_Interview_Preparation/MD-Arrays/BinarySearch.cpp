
class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        int flag=0;
        int i;
        for( i = 0;i<n;i++)
        {
            if(arr[i]==k)
            {
                flag=1;
                break;
            }
        }
        return flag==1?i:-1;
    }
};