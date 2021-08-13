//solution: https://practice.geeksforgeeks.org/problems/gp-term/1/?track=ppc-mathematics&batchId=221
//Given the first 2 terms A and B of a Geometric Series. The task is to find the Nth term of the series.

double termOfGP(int A,int B,int N)
{
    double ratio=(double)B/(double)A;
    double ans=pow(ratio,N-1);
    return A*ans;
}