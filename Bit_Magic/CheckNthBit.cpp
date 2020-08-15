//Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number. 

//User function Template for C++

// Function to check if Kth bit is set or not
bool checkKthBit(int n, int k){
    return ((n>>k)&1);
}   