// Given two values N and M. 
// Give the value when N is halved M-1 times.

//TLE
// class Solution{
// public:
//     int mthHalf(int N, int M){
//         int m=M-1;
//         while(m>0)
//         {
//             N=N/2;
//         }
//         return N;
//     }
// };

//Optimize solution to find halving of no
class Solution{
public:
    int mthHalf(int N, int M){
        return N/pow(2,M-1);
    }
};