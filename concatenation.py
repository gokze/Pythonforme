class Solution(object):
    def getConcatenation(self, nums):
        k=0
        ans = list()
        for i in range(0,2*len(nums)):
            print(i,k)
            ans.append(nums[k])
            k+=1
            if(k==len(nums)):
                k=0
        return ans
        
