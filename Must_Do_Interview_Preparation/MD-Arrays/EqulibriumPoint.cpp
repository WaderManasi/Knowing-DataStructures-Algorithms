// Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array. 
// Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

int equilibriumPoint(long long a[], int n) {
   if(n==1) return 1;
   if(n==2) return -1;
   int i=0,j=n-1;
   long long st=0,lt=0;
   while(i<=j)
   {
       if(st==lt)
        {
            if(i==j) return i+1;
            st=st+a[i];
            lt=lt+a[j];
            i++;
            j--;
        }
        else if(st>lt)
        {
            lt=lt+a[j];
            j--;
        }
        else if(st<lt)
        {
            st=st+a[i];
            i++;
        }
        
    }
    return -1;
}