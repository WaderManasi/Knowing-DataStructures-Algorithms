//https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1/?track=ppc-arrays&batchId=221

//Given a sorted array A of size N. The function remove_duplicate takes two arguments . The first argument is the sorted array A[ ] and the second argument is 'N' the size of the array and returns the size of the new converted array A[ ] with no duplicate element.

//solution
int remove_duplicate(int A[],int N)
{
 set<int> v(A, A+N);
 copy(v.begin(), v.end(), A);

return v.size();
}