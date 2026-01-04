class Solution(object):
    def sumFourDivisors(self, nums):
        divisors=list()
        count=0
        sum=0
        for i in nums:
            for j in range(1,i+1):
                if(i%j==0):
                    divisors.append(j)
                    count+=1
            if count==4:
                for k in divisors:
                    sum=sum+k
            count=0
            divisors=[]
        return sum
        
