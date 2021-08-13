//https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1/?track=ppc-bit-magic&batchId=221
//Given a positive integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.
 
//solution:

bool isPowerofTwo(long long n){
    
    return (n&(n-1))?false:true;   
    
}