class Solution(object):
    def findErrorNums(self, nums):
        out=list()
        seen=set()
        for i in nums:
            if i in seen:
                out.append(i)
            seen.add(i)
        for i in range(1,len(nums)+1):
            if i not in seen:
                out.append(i)
                break
        return out


        
