//Given an array a[ ] of size N. The task is to find the median and mean of the array elements. Mean is average of the numbers and median is the element which is smaller than half of the elements and greater than remaining half.  If there are odd elements, the median is simply the middle element in the sorted array.
//If there are even elements, then the median is floor of average of two middle numbers in the sorted array.
//If mean is floating point number, then we need to print floor of it.

int median(int A[],int N)
{
    sort(A,A+N);    //include algorithm header file
    int mdn;
    if(N%2==0)
    {
        mdn=(int)N/2;
        return A[mdn-1];
    }
    else
    {
        mdn=(int)(N+1)/2;
        return A[mdn-1];
    }
}

int mean(int A[],int N)
{
    int mn;
    for(int i=0;i<N;i++)
    mn+=A[i];
    return mn/N;
}