// Given two binary strings A and B that represent value of two integers, find the product of two strings in Decimal Value.

//Solution:
class Solution {
  public:
    long long int karatsubaAlgo(string A, string B) {
        long long int num1=0,num2=0;
        int k=0;
        for(int i=A.length()-1;i>=0;i--)
        {
            if(A[i] == '1')
            num1 += pow(2,k)*1;
            k++;
            //cout<<num1<<"n1 \n";
        }
        k=0;
        for(int i=B.length()-1;i>=0;i--)
        {
            if(B[i] == '1')
            num2 += pow(2,k)*1;
            //cout<<num2<<"n2 \n";
            k++;
            //cout<<k<<"k ";
        }
        long long int ans = num1*num2;
        return ans;
    }
};