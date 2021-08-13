// Someone is asked to perform the following operations on a randomly chosen number between 1 and 10.

class Solution {
  public:
    int mindGame(int K) {
        int s1=(2*K)+K;
        int s2=s1/2;
        int s3=s2-K;
        return s3;
    }
};