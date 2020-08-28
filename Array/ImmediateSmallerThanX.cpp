// User function to complete
// arr[]: input array
// n: size of array
// k: find element smaller and closest to it. 
int immediateSmaller(int arr[], int n, int x)
{
    int mi=INT_MAX;
    int y;
    for(int i=0;i<n;i++)
    {
        if(abs(arr[i]-x)<mi && arr[i]<x){
            mi=abs(arr[i]-x);
            y=arr[i];
        }
            
    }
    bool flag  = true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=x)
            flag = true;
        else
        {
            flag = false;
            break;
            
        }
    }
    if(flag) return -1;
    else return y;
}