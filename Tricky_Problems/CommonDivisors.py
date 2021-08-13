#solution:

class Solution:
    def commDiv (self, a, b):
        s1=set()
        s2=set()
        for i in range(1,a+1):
            if(a%i == 0):
                s1.add(i)
        for i in range(1,b+1):
            if(b%i == 0):
                s2.add(i)
        return len(s1.intersection(s2))
