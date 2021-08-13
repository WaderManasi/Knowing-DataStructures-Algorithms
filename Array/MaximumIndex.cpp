// Given an array A[] of N positive integers.
// The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].
 
int maxIndexDiff(int arr[], int n) 
{ 
    int i=0,j=n-1,m=0,d=0;
   
   while(i<=j){
            if(arr[i]<=arr[j])
            {
                m=max(m,(j-i));
                i++;
                j=n-1;
                
            }
            else
            j--;
   }
    return m;  
}