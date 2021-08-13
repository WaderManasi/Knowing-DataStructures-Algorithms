// Given an array H representing heights of buildings. You have to count the buildings which will see the sunrise (Assume : Sun rise on the side of array starting point).

class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n) {
	    int max=h[0];
	    int ct=0;
	    for(int i=1;i<n;i++)
	    {
	        if(max<h[i])
	        {
	            ct++;
	            max=h[i];
	        }
	    }
	    return ct+1;
	}
};