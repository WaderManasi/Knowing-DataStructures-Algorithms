// Sherlock Being tired with the usual coding rounds started growing his interest towards reverse coding when he won the event in his college symposium.
// He wondered if his friend has the brain to quickly identify the pattern and verify if his inputs are correct or not.
// From the example portion given below, where you will be given a number(n) and its output m, Using this find the pattern.
// Your task is that from the pattern you identified above, You have to tell if for the given n whether the given m is the correct answer or not.

// Example to identify the pattern :
// Input                            Output
// 10                                 55
// 20                                 210
// 5                                   15
// 0                                    0
// 1                                    1
// 2                                    3

//Solution:
class Solution {
  public:
    int revCoding(int n, int m) {
        int p=(n*(n+1))/2;
        return p==m?1:0;
    }
};