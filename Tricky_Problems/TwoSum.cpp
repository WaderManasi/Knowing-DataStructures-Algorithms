// Given an array of positive integers and an integer.
// Determine whether or not there exist two elements in A whose sum is exactly equal to that integer.

//Solution:

// A[] : the input array of positive integers
// N : size of the array arr[]
// X : the required sum
bool keypair(vector<int> A, int N, int X)
{
    if (X == 0 || X == 1)
        return false;
    int j = 0;
    for (int i = 0; i < N; i++)
    {
        int temp = X - A[i];
        int ex = A[i];
        A[i] = 0;
        if (temp > 0)
        {
            //cout<<"temp:"<<temp<<" a[i]:"<<A[i]<<" i:"<<i<<" j:"<<j<<" \n";

            if (count(A.begin(), A.end(), temp))
            {
                // cout<<"true\n";
                return true;
            }
        }
        j++;
        //cout<<"not pre\n";
        A[i] = ex;
    }
    return false;
}
