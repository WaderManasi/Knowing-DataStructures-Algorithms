//https://practice.geeksforgeeks.org/problems/square-root/1/?track=amazon-arrays&batchId=192

//Given an integer x. The task is to find the square root of x. If x is not a perfect square, then return floor(√x).

//solution:

long long int floorSqrt(long long int x) 
{
    int i;
    
    for( i=1;i*i<=x;i++);
    
    return i-1;
}