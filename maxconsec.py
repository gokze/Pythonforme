class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        k=0
        max=0
        for i in nums:
            if(i==1):
                k+=1
            if(k>max):
                max=k
            if(i!=1):
                k=0
        return max
        
