"""
Amicable numbers are two different numbers so related that the sum of the proper divisors of each is equal to the other number. (A proper divisor of a number is a positive factor of that number other than the number itself. Given two Numbers A and B, find whether they are Amicable Numbers or not.
Print 1 if they are Amicable else 0.
"""

class Solution:
    def isAmicable(self, A , B):
        if(A==B):
            return 0;
        sum1=1
        sum2=1
        for i in range(2,A):
            if(A%i == 0):
                sum1 += i
        for i in range(2,B):
            if(B%i == 0):
                sum2 += i
        if(sum1 == B and sum2 == A):
            return 1
        else:
            return 0