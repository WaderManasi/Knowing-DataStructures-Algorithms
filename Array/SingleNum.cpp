// Given an array Arr of positive integers of size N where every element appears even times except for one.
// Find that number occuring odd number of times.

//User function template for C++
class Solution{
public:
	int getSingle(int arr[], int n) {
	    int res=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        res=res^arr[i];
	    }
	    return res;
	}
};
