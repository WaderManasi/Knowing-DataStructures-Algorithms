// Given a number N, find the Nth term in the series 1, 3, 6, 10, 15, 21…
class Solution {
  public:
    int findNthTerm(int N) {
        int a = 0;
        int i = 1;
        for(int j=0;j<N;j++)
        {
            a+=i;
            i++;
        }
        return a;
    }
};