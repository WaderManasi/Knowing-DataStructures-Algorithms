// Given an array A[]  of n elements.
// Your task is to complete the Function num which returns an integer denoting the total number of times digit k appears in the whole array.

int num(int a[], int n, int k)
{
    int ct=0;
     for(int i=0;i<n;i++)
     {
         while(a[i]>0)
         {
             if(a[i]%10==k)
             ct++;
             a[i]=a[i]/10;
         }
     }
     return ct;
}