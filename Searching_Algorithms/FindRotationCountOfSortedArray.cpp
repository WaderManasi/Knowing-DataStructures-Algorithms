//https://practice.geeksforgeeks.org/problems/rotation4723/1

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	  int ans = getPivot(arr, n);
	  //cout<<ans<<"* ";
	  //if(ans==n)    return 0;
	  return (ans+1)%n;
	}
    int getPivot(int arr[], int n){
         int s=0,e=n-1;
	   while(s<=e){
	       int mid=s+(e-s)/2;
	       if(mid<e && arr[mid]>arr[mid+1]) return mid;
	       if(mid>s && arr[mid]<arr[mid-1])    return mid-1;
	       if(arr[s]>=arr[mid]) e=mid-1;
	       else s=mid+1;
	       //else s=mid+1;
	   }
	   return -1;
    }
}
